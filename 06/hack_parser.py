class HackParser:
    A_INSTRUCTION="A_INSTRUCTION"
    C_INSTRUCTION="C_INSTRUCTION"
    L_INSTRUCTION="L_INSTRUCTION"

    def __init__(self, target_file):
        with open(target_file, 'r') as inputfile:
            self.lines = [ x.strip() for x in inputfile.readlines() if x.strip() != '']
        self.pos=0
        self.current_line=0
        if not self._has_instruction(): self.advance()

    def __str__(self):
        return self.lines[self.pos]

    def _has_instruction(self):
        if len(str(self))==0: #empty line
            return False
        elif str(self)[0]=='/': #comment
            return False
        else:
            return True

    def has_more_lines(self):
        return self.pos<len(self.lines)-1

    def advance(self):
        while True:
            if self.has_more_lines():
                if self._has_instruction() and not self.instruction_type()==HackParser.L_INSTRUCTION:
                    self.current_line += 1
                self.pos += 1
            if self._has_instruction() or not self.has_more_lines():
                break

    def instruction_type(self):
        if str(self).startswith("@"):
            return HackParser.A_INSTRUCTION
        elif str(self).startswith("("):
            return HackParser.L_INSTRUCTION
        else:
            return HackParser.C_INSTRUCTION

    def symbol(self):
        if self.instruction_type()==HackParser.L_INSTRUCTION:
            return str(self)[1:-1]
        elif self.instruction_type()==HackParser.A_INSTRUCTION:
            return str(self)[1:]
        else:
            raise Exception(f"Invalid call to symbol with: {self.instruction_type()}")

    def dest(self):
        if self.instruction_type()==HackParser.C_INSTRUCTION:
            if '=' in str(self):
                return str(self).split('=')[0]
            else:
                return ''
        else:
            raise Exception(f"Invalid call to dest with: {self.instruction_type()}")


    def comp(self):
        if self.instruction_type()==HackParser.C_INSTRUCTION:
            command=str(self)
            if '=' in command:
                command=command.split('=')[1]
            if ';' in command:
                command=command.split(';')[0]
            return command
        else:
            raise Exception(f"Invalid call to comp with: {self.instruction_type()}")


    def jump(self):
        if self.instruction_type()==HackParser.C_INSTRUCTION:
            if ';' in str(self):
                return str(self).split(';')[1]
            else:
                return ''
        else:
            raise Exception(f"Invalid call to jump with: {self.instruction_type()}")

    def get_current_line(self):
        return self.current_line
