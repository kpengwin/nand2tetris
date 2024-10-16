#import "symboltable.h"

void reset(SYMBOL_TABLE * s) {
	return;
}

void define(SYMBOL_TABLE * s, char * name, char * type, V_KIND kind) {
	return;
}

int varCount(SYMBOL_TABLE * s, V_KIND kind) {
	return 0; // TODO: fix dummy value
}

V_KIND kindOf(SYMBOL_TABLE * s, char * name) {
	return V_ARG; // TODO: fix dummy value
}

char * typeOf(SYMBOL_TABLE * s, char * name) {
	return "Dummy"; // TODO: fix dummy value
}

int indexOf(SYMBOL_TABLE * s, char * name) {
	return 0; // TODO: fix dummy value
 
}
