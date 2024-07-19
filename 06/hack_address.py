def symbol_to_binary(symbol):
    if symbol[0] in "012345689":
        bin_symbol=bin(int(symbol))[2:]
        bin_symbol='0'*(16-len(bin_symbol))+bin_symbol
    else:
        return ""
    return bin_symbol
