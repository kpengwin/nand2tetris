
class HackSymbolTable:
    def __init__(self):
        self.table={}
        for i in range(16):
            self.addEntry(f"R{i}",i)
        self.addEntry("SP",0)
        self.addEntry("LCL",1)
        self.addEntry("ARG",2)
        self.addEntry("THIS",3)
        self.addEntry("THAT",4)
        self.addEntry("SCREEN",16384)
        self.addEntry("KBD",24576)
        self.nextVar=16

    def contains(self, symbol):
        return True if symbol in self.table else False

    def addEntry(self, symbol, address):
        if not self.contains(symbol):
            if address >=0:
                self.table[symbol]=address
            else: #New unspecified variable
                self.table[symbol]=self.nextVar
                self.nextVar +=1
        else:
            raise Exception(f"Symbol {symbol} already found in table")

    def getAddress(self, symbol):
        if self.contains(symbol):
            return self.table[symbol]
        else:
            raise Exception(f"Symbol {symbol} not found in symbol table.")
        
