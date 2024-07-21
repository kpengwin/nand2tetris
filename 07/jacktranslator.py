#!/usr/bin/env python3
# Assembler for the Hack assembly language from nand2tetris
import sys
import jackvm_codewriter
from jackvm_parser import VMParser

# Assemble the current instruction for the parser
def write_cur_instr(parser):
    if parser.instruction_type()==VMParser.C_ARITHMETIC:
        print(f"Not translated {parser.instruction_type()}: {str(parser)}")
    elif parser.instruction_type()==VMParser.C_PUSH:
        print(f"Not translated {parser.instruction_type()}: {str(parser)}")
    elif parser.instruction_type()==VMParser.C_POP:
        print(f"Not translated {parser.instruction_type()}: {str(parser)}")
    else:
        raise Exception(f"Unsupported instruction type: {parser.instruction_type()}")

def output_assembly(filename, debug=False):
    translate = debug_output_write if debug else write_cur_instr
    parser=VMParser(filename)
    assembly_result=translate(parser)
    if assembly_result: print(assembly_result)
    while parser.has_more_lines():
        parser.advance()
        assembly_result=translate(parser)
        if assembly_result: print(assembly_result)

def debug_output_assemble(parser,symbols):
    if parser.instruction_type()==VMParser.C_ARITHMETIC:
        pass
    else:
        raise Exception(f"Unsupported instruction type: {parser.instruction_type()}")

def do_translate(filename,debug=False):
    output_assembly(filename, debug)
    return

usage_message=f"Usage: ./{sys.argv[0]} [filename.vm] [--debug]"
if len(sys.argv)<2:
    print(usage_message)
elif len(sys.argv)==2:
    do_translate(sys.argv[1])
elif len(sys.argv)==3 and sys.argv[2]=='--debug':
    do_translate(sys.argv[1],debug=True)
else:
    print(usage_message)

