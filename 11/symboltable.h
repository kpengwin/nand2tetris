#ifndef symboltable_h
#define MAX_SYMBOL_TABLE_ENTRIES 255

typedef enum {
	V_STATIC,
	V_SFIELD,
	V_ARG,
	V_VAR,
} V_KIND;

typedef struct {
	char * name;
	char * type;
	V_KIND kind;
} SYMBOL_TABLE_ENTRY;

/* Not getting fancy here, but if needed we could dynamically allocate this 
 * or else just make it a parameter you can pass in if you prog breaks */
typedef struct {
	SYMBOL_TABLE_ENTRY entries[MAX_SYMBOL_TABLE_ENTRIES];
} SYMBOL_TABLE;

void reset(SYMBOL_TABLE * s) ;

void define(SYMBOL_TABLE * s, char * name, char * type, V_KIND kind) ;

int varCount(SYMBOL_TABLE * s, V_KIND kind) ;

V_KIND kindOf(SYMBOL_TABLE * s, char * name) ;

char * typeOf(SYMBOL_TABLE * s, char * name) ;

int indexOf(SYMBOL_TABLE * s, char * name) ;

#define symboltable_h
#endif
