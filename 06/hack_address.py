def symbol_to_binary(symbol,symbol_table):
    if symbol[0] in "0123456789":
        return convert_and_pad(int(symbol))
    elif symbol_table.contains(symbol):
        return convert_and_pad(symbol_table.getAddress(symbol))
    else:
        # New variable name
        symbol_table.addEntry(symbol,-1)
        return convert_and_pad(symbol_table.getAddress(symbol))

def convert_and_pad(number):
    bin_symbol=bin(int(number))[2:]
    bin_symbol='0'*(16-len(bin_symbol))+bin_symbol
    return bin_symbol
