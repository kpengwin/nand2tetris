// External includes
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Local includes
#include "symboltable.h"

#define STR_EQUAL 0

char *S_STATIC = "static";
char *S_FIELD = "field";
char *S_ARG = "arg";
char *S_VAR = "var";
char *S_NONE = "none";

char * kindToS(V_KIND kind) {
	switch (kind) {
		case V_STATIC:
			return S_STATIC;
		case V_FIELD:
			return S_FIELD;
		case V_ARG:
			return S_ARG;
		case V_VAR:
			return S_VAR;
		case V_NONE:
			return S_NONE;
	}
	assert(0);
	return 0;
}

/* returns kind of kw, defaulting to ARG which has no kw*/
V_KIND kwToKind(KEYWORD kw) {
	switch (kw) {
		case K_STATIC:
			return V_STATIC;
		case K_FIELD:
			return V_FIELD;
		case K_VAR:
			return V_VAR;
		default:
			return V_ARG;
	}
	assert(0);
	return 0;
}
/* return the first blank row of the table */
static int nextSymbolI(SYMBOL_TABLE * s) {
	int i;
	for (i=0;i<MAX_SYMBOL_TABLE_ENTRIES;i++) {
		if (s->entries[i].name == NULL)
			return i;
	}
	assert(0 && "Error - symbol table full");
	return i+1;
}

/* return the row number matching the supplied name, or -1 if not found */
int findByName(SYMBOL_TABLE * s, char * name) {
	int max = nextSymbolI(s);
	for(int i=0;i<max;i++) {
		if (strcmp(name, s->entries[i].name) == STR_EQUAL) {
			return i;
		}
	}
	return -1;
}

/* Empties the symbol table and resets the four indexes to 0. Should
* be called when starting to compile a subroutine declaration */
void reset(SYMBOL_TABLE * s) {
	int end = nextSymbolI(s);
	if (end) {
		for (int i=0;i<end;i++) {
			free(s->entries[i].name);
			s->entries[i].name = NULL;
			free(s->entries[i].type);
			s->entries[i].type = NULL;
		}
		for (int i=0;i<NUM_KINDS;i++){
			s->counts[i]=0;
		}
	}
	return;
}

/* Defines (adds to the table) a new variable of the given name, type, and
* kind. Assigns to it the index value of that kind, and adds 1 to the index */
void define(SYMBOL_TABLE * s, char * name, char * type, V_KIND kind) {
	int target = nextSymbolI(s);
	s->entries[target].name = name;
	s->entries[target].type = type;
	s->entries[target].kind = kind;
	s->entries[target].index = s->counts[kind];
	s->counts[kind]++;
	return;
}

/* Returns the number of variables of the given kind already defined
* in the table */
int varCount(SYMBOL_TABLE * s, V_KIND kind) {
	return s->counts[kind];
}

/* Returns the kind of the named identifier. If the identifier is not found,
* returns V_NONE */
V_KIND kindOf(SYMBOL_TABLE * s, char * name) {
	int row = findByName(s, name);
	return (row == -1) ? V_NONE : s->entries[row].kind;
}

/* Returns the type of the named variable */
char * typeOf(SYMBOL_TABLE * s, char * name) {
	int row = findByName(s, name);
	assert((row != -1) && "symbol name not found");
	return s->entries[row].type;
}

/* returns the index of the named variable */
int indexOf(SYMBOL_TABLE * s, char * name) {
	int row = findByName(s, name);
	assert((row != -1) && "symbol name not found");
	return s->entries[row].index;
}
