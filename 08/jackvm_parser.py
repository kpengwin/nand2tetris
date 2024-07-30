# Parser for Jack VM language

class VMParser:
    C_ARITHMETIC="C_ARITHMETIC"
    C_PUSH="C_PUSH"
    C_POP="C_POP"
    C_LABEL="C_LABEL"
    C_GOTO="C_GOTO"
    C_IF="C_IF"
    C_FUNCTION="C_FUNCTION"
    C_RETURN="C_RETURN"
    C_CALL="C_CALL"

    C_ARITHMETIC_COMMANDS = [
        "add",
        "sub",
        "neg",
        "eq",
        "gt",
        "lt",
        "and",
        "or",
        "not"
    ]

    def __init__(self, target_file):
        with open(target_file, 'r') as inputfile:
            self.lines = [ x.strip() for x in inputfile.readlines() if x.strip() != '']
        self.pos=0          # Represents the line number of the input file
        if not self._has_instruction(): self.advance()

    def __str__(self):
        return self.lines[self.pos]

    def _has_instruction(self):
        if len(str(self))==0: #empty line
            return False
        elif str(self).startswith('//'): #comment
            return False
        else:
            return True

    def has_more_lines(self):
        return self.pos<len(self.lines)-1

    def advance(self):
        while True:
            if self.has_more_lines():
                self.pos += 1
            if self._has_instruction() or not self.has_more_lines():
                break

    def instruction_type(self):
        if str(self).split()[0] in VMParser.C_ARITHMETIC_COMMANDS:
            return VMParser.C_ARITHMETIC
        elif str(self).startswith("push"):
            return VMParser.C_PUSH
        elif str(self).startswith("pop"):
            return VMParser.C_POP
        elif str(self).startswith("label"):
            return VMParser.C_LABEL
        elif str(self).startswith("goto"):
            return VMParser.C_GOTO
        elif str(self).startswith("if"):
            return VMParser.C_IF
        elif str(self).startswith("function"):
            return VMParser.C_FUNCTION
        elif str(self).startswith("return"):
            return VMParser.C_RETURN
        elif str(self).startswith("call"):
            return VMParser.C_CALL
        else:
            raise Exception(f"Unknown instruction type for command: {str(self)}")

    def arg1(self):
        if self.instruction_type() == VMParser.C_RETURN:
            raise Exception("Cannot call arg1 with C_RETURN")
        elif self.instruction_type() == VMParser.C_ARITHMETIC:
            return str(self).split()[0]
        else:
            return str(self).split()[1]

    def arg2(self):
        allowed_types = [
            VMParser.C_PUSH,
            VMParser.C_POP,
            VMParser.C_FUNCTION,
            VMParser.C_CALL
        ]
        if not self.instruction_type() in allowed_types:
            raise Exception(f"Cannot call arg1 with type: {self.instruction_type()}")
        else:
            return str(self).split()[2]
