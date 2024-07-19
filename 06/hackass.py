#!/usr/bin/env python3
# Assembler for the Hack assembly language from nand2tetris
import sys
import hack_code
from hack_parser import HackParser
from hack_symbol_table import HackSymbolTable

# Assemble the current instruction for the parser
def assemble_cur_instr(parser,symbols):
    if parser.instruction_type()==HackParser.C_INSTRUCTION:
        return f"111{hack_code.comp(parser.comp())}{hack_code.dest(parser.dest())}{hack_code.jump(parser.jump())}"
    elif parser.instruction_type()==HackParser.L_INSTRUCTION:
        # Do nothing, should already be processed
        return
    elif parser.instruction_type()==HackParser.A_INSTRUCTION:
        return f"{hack_code.symbol_to_binary(parser.symbol(),symbols)}"
    else:
        raise Exception(f"Unsupported instruction type: {parser.instruction_type()}")

def output_assembled(filename, symbols, debug=False):
    assemble = debug_output_assemble if debug else assemble_cur_instr
    parser=HackParser(filename)
    assemble_result=assemble(parser,symbols)
    if assemble_result: print(assemble_result)
    while parser.has_more_lines():
        parser.advance()
        assemble_result=assemble(parser,symbols)
        if assemble_result: print(assemble_result)

def process_label(parser,symbols):
    if parser.instruction_type()==HackParser.L_INSTRUCTION:
        symbols.addEntry(parser.symbol(),parser.get_current_line())
        return
    else:
        # Ignore other instructions for now
        return

# Update the symbols table by preprocessing all L_INSTRUCTION
def preprocess_labels(filename, symbols):
    parser=HackParser(filename)
    process_label(parser,symbols)
    while parser.has_more_lines():
        parser.advance()
        process_label(parser,symbols)
    return

def debug_output_assemble(parser,symbols):
    if parser.instruction_type()==HackParser.C_INSTRUCTION:
        return f"Line {parser.get_current_line()}: {parser.instruction_type()} '{str(parser)}' dest:{parser.dest()} comp:{parser.comp()} jump:{parser.jump()} \nbinary:{assemble_cur_instr(parser,symbols)}"
    elif parser.instruction_type()==HackParser.A_INSTRUCTION:
        return f"Line {parser.get_current_line()}: {parser.instruction_type()} '{str(parser)}' symbol:{parser.symbol()} \nbinary:{assemble_cur_instr(parser,symbols)}"
    elif parser.instruction_type()==HackParser.L_INSTRUCTION:
        return f"Label: {parser.symbol()} assigned value: {symbols.getAddress(parser.symbol())}"
    else:
        raise Exception(f"Unsupported instruction type: {parser.instruction_type()}")

def do_assemble(filename,debug=False):
    symbols=HackSymbolTable()
    preprocess_labels(filename, symbols)
    output_assembled(filename, symbols, debug)
    return

usage_message=f"Usage: ./{sys.argv[0]} [filename.asm] [--debug]"
if len(sys.argv)<2:
    print(usage_message)
elif len(sys.argv)==2:
    do_assemble(sys.argv[1])
elif len(sys.argv)==3 and sys.argv[2]=='--debug':
    do_assemble(sys.argv[1],debug=True)
else:
    print(usage_message)

