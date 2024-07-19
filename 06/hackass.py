#!/usr/bin/env python3
# Assembler for the Hack assembly language from nand2tetris
import sys
import hack_code
import hack_address
from hack_parser import HackParser

# Assemble the current instruction for the parser
def assemble_cur_instr(parser): 
    if parser.instruction_type()==HackParser.C_INSTRUCTION:
        return f"111{hack_code.comp(parser.comp())}{hack_code.dest(parser.dest())}{hack_code.jump(parser.jump())}"
    else:
        return f"{hack_address.symbol_to_binary(parser.symbol())}"

def output_assembled(filename, debug=False):
    if debug:
        assemble_function=debug_output_assemble
    else:
        assemble_function=assemble_cur_instr
    parser=HackParser(filename)
    print(assemble_function(parser))
    while parser.has_more_lines():
        parser.advance()
        print(assemble_function(parser))

def debug_output_assemble(parser):
    if parser.instruction_type()==HackParser.C_INSTRUCTION:
        print(f"{parser.instruction_type()} '{str(parser)}' dest:{parser.dest()} comp:{parser.comp()} jump:{parser.jump()} \nbinary:{assemble_cur_instr(parser)}")
    else:
        print(f"{parser.instruction_type()} '{str(parser)}' symbol:{parser.symbol()} \nbinary:{assemble_cur_instr(parser)}")

usage_message=f"Usage: ./{sys.argv[0]} [filename.asm] [--debug]"
if len(sys.argv)<2:
    print(usage_message)
elif len(sys.argv)==2:
    output_assembled(sys.argv[1])
elif len(sys.argv)==3 and sys.argv[2]=='--debug':
    output_assembled(sys.argv[1],True)
else:
    print(usage_message)

