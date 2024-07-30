#!/usr/bin/env python3
# Assembler for the Hack assembly language from nand2tetris
import sys
import jackvm_codewriter as code
from jackvm_parser import VMParser

def init_code():
    static_init_code="//init sp to 256\n@256\nD=A\n@SP\nM=D\n"
    init_call = "//call Sys.init()\n"+code.writeCall("Sys.init", 0, 0) + "\n"
    static_end_code="//end\n(end_loop)\n@end_loop\n0;JMP"
    return static_init_code + init_call + static_end_code

# Assemble the current instruction for the parser
def write_cur_instr(parser,deconflicter):
    print(f"//{str(parser)}")
    i_type=parser.instruction_type()
    if i_type==VMParser.C_ARITHMETIC:
        print(f"{code.writeArithmetic(parser.arg1(), deconflicter)}")
    elif i_type in [VMParser.C_PUSH, VMParser.C_POP]:
        print(f"{code.writePushPop(i_type, parser.arg1(), parser.arg2())}")
    elif i_type==VMParser.C_IF:
        print(f"{code.writeIf(parser.arg1())}")
    elif i_type==VMParser.C_GOTO:
        print(f"{code.writeGoto(parser.arg1())}")
    elif i_type==VMParser.C_LABEL:
        print(f"{code.writeLabel(parser.arg1())}")
    elif i_type==VMParser.C_CALL:
        print(f"{code.writeCall(parser.arg1(), parser.arg2(), deconflicter)}")
    elif i_type==VMParser.C_RETURN:
        print(f"{code.writeReturn()}")
    elif i_type==VMParser.C_FUNCTION:
        print(F"{code.writeFunction(parser.arg1(), parser.arg2())}")
    else:
        raise Exception(f"Unsupported instruction type: {parser.instruction_type()}")

def output_assembly(filename):
    translate = write_cur_instr
    parser=VMParser(filename)
    deconflicter=1
    assembly_result=translate(parser, deconflicter)
    if assembly_result: print(assembly_result)
    while parser.has_more_lines():
        deconflicter += 1
        parser.advance()
        assembly_result=translate(parser, deconflicter)
        if assembly_result: print(assembly_result)

def do_translate(filenames):
    print(init_code())
    for filename in filenames.split(','):
        output_assembly(filename)
    #print(end_code())
    return

usage_message=f"Usage: ./{sys.argv[0]} [filename1.vm,filename2.vm,etc]"
if len(sys.argv)<2:
    print(usage_message)
elif len(sys.argv)==2:
    do_translate(sys.argv[1])
else:
    print(usage_message)

