# Helper functions for translating jack vm commands to hack assembly code

def setFileName(filename):
    #may not use this
    pass

def writeArithmetic(command,dc):
    if command == "add":
        return f"{_popd()}\n@SP\nA=M-1\nM=D+M"
    elif command == "sub":
        return f"@SP\nA=M-1\nD=-M\n@SP\nM=M-1\nA=M-1\nM=D+M"
    elif command == "neg":
        return f"@SP\nA=M-1\nM=-M"
    elif command == "eq":
        return f"{_popd()}\n@SP\nA=M-1\nDM=D-M\n@eqend{dc}\nD;JNE\n@0\nA=A-1\nD=A\n@SP\nA=M-1\nM=D\n@neqend{dc}\n0;JMP\n(eqend{dc})\n@0\nD=A\nA=M-1\nM=D\n(neqend{dc})"
    elif command == "gt":
        return f"{_popd()}\n@SP\nA=M-1\nDM=D-M\n@gtend{dc}\nD;JGE\n@0\nA=A-1\nD=A\n@SP\nA=M-1\nM=D\n@ngtend{dc}\n0;JMP\n(gtend{dc})\n@0\nD=A\nA=M-1\nM=D\n(ngtend{dc})"
    elif command == "lt":
        return f"{_popd()}\n@SP\nA=M-1\nDM=D-M\n@ltend{dc}\nD;JLE\n@0\nA=A-1\nD=A\n@SP\nA=M-1\nM=D\n@nltend{dc}\n0;JMP\n(ltend{dc})\n@0\nD=A\nA=M-1\nM=D\n(nltend{dc})"
    elif command == "and":
        return f"{_popd()}\n@SP\nA=M-1\nM=D&M"
    elif command == "or":
        return f"{_popd()}\n@SP\nA=M-1\nM=D|M"
    elif command == "not":
        return f"@SP\nA=M-1\nM=!M"
    else:
        raise Exception(f"Unhandled command: {command}")

def writePushPop(command, segment, index):
    if command == "C_PUSH":
        return _push(segment,index)
    else:
        return _pop(segment,index)

def writeLabel(label):
    pass

def writeGoto(label):
    pass

def writeIf(label):
    pass

def writeFunction(functionName, numVars):
    pass

def writeCall(functionName, nArgs):
    pass

def writeReturn():
    pass

def _pushd():
    return "@SP\nA=M\nM=D\n@SP\nM=M+1"

def _popd():
    return "@SP\nAM=M-1\nD=M"

def _drop():
    return f"@SP\nM=M-1"

def _push(segment, index):
    pushd=_pushd()
    index = int(index)
    if segment == "argument":
        return f"@{index}\nD=A\n@ARG\nA=D+M\nD=M\n{pushd}"
    elif segment == "local":
        return f"@{index}\nD=A\n@LCL\nA=D+M\nD=M\n{pushd}"
    elif segment == "static":
        return f"@static.{index}\nD=M\n{pushd}"
    elif segment == "constant":
        return f"@{index}\nD=A\n{pushd}"
    elif segment == "this":
        return f"@{index}\nD=A\n@THIS\nA=D+M\nD=M\n{pushd}"
    elif segment == "that":
        return f"@{index}\nD=A\n@THAT\nA=D+M\nD=M\n{pushd}"
    elif segment == "pointer":
        assert index in [0,1]
        return f"@{index+3}\nD=M\n{pushd}"
    elif segment == "temp":
        assert index in list(range(8))
        return f"@{index+5}\nD=M\n{pushd}"
    else:
        raise Exception(f"Unhandled segment: {segment}")

def _pop(segment, index):
    popd=_popd()
    index = int(index)
    if segment == "argument":
        return f"@{index}\nD=A\n@ARG\nM=D+M\n{popd}\n@ARG\nA=M\nM=D\n@{index}\nD=A\n@ARG\nM=M-D"
    elif segment == "local":
        return f"@{index}\nD=A\n@LCL\nM=D+M\n{popd}\n@LCL\nA=M\nM=D\n@{index}\nD=A\n@LCL\nM=M-D"
    elif segment == "static":
        return f"{popd}\n@static.{index}\nM=D"
    elif segment == "this":
        return f"@{index}\nD=A\n@THIS\nM=D+M\n{popd}\n@THIS\nA=M\nM=D\n@{index}\nD=A\n@THIS\nM=M-D"
    elif segment == "that":
        return f"@{index}\nD=A\n@THAT\nM=D+M\n{popd}\n@THAT\nA=M\nM=D\n@{index}\nD=A\n@THAT\nM=M-D"
    elif segment == "pointer":
        assert index in [0,1]
        return f"{popd}\n@{index+3}\nM=D"
    elif segment == "temp":
        assert index in list(range(8))
        return f"{popd}\n@{index+5}\nM=D"
    else:
        raise Exception(f"Unhandled segment: {segment}")
