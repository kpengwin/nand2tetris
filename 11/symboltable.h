#ifndef symboltable_h
#define MAX_SYMBOL_TABLE_ENTRIES 255
#define NUM_KINDS 4

typedef enum {
	V_STATIC,
	V_FIELD,
	V_ARG,
	V_VAR,
	V_NONE, //Not a real kind, indicates failure
} V_KIND;

extern char* S_STATIC;
extern char* S_FIELD;
extern char* S_ARG;
extern char* S_VAR;
extern char* S_NONE;

/* get the string value of a kind */
char * kindToS(V_KIND kind) ;

typedef struct {
	char * name;
	char * type;
	V_KIND kind;
	int index;
} SYMBOL_TABLE_ENTRY;

/* Not getting fancy here, but if needed we could dynamically allocate this 
 * or else just make it a parameter you can pass in if you prog breaks */
typedef struct {
	SYMBOL_TABLE_ENTRY entries[MAX_SYMBOL_TABLE_ENTRIES];
	int counts[NUM_KINDS];
} SYMBOL_TABLE;

/* Empties the symbol table and resets the four indexes to 0. Should
* be called when starting to compile a subroutine declaration */
void reset(SYMBOL_TABLE * s) ;

/* Defines (adds to the table) a new variable of the given name, type, and
* kind. Assigns to it the index value of that kind, and adds 1 to the index */
void define(SYMBOL_TABLE * s, char * name, char * type, V_KIND kind) ;

/* Returns the number of variabls of the given kind already defined
* in the table */
int varCount(SYMBOL_TABLE * s, V_KIND kind) ;

/* Returns the kind of the named identifier. If the identifier is not found,
* returns V_NONE */
V_KIND kindOf(SYMBOL_TABLE * s, char * name) ;

/* Returns the type of the named variable */
char * typeOf(SYMBOL_TABLE * s, char * name) ;

/* returns the index of the named variable */
int indexOf(SYMBOL_TABLE * s, char * name) ;

#define symboltable_h
#endif
