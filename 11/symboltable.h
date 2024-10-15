
typedef enum {
	V_STATIC,
	V_SFIELD,
	V_ARG,
	V_VAR,
} V_KIND;


// TODO: need to figure out interface here
typedef struct {
	char * name;
	char * type;
	V_KIND kind;
} SYMBOL_TABLE_ENTRY;

void reset(SYMBOL_TABLE * s) ;

void define(SYMBOL_TABLE * s, char * name, char * type, V_KIND kind) ;

int varCount(SYMBOL_TABLE * s, V_KIND kind) ;

V_KIND kindOf(SYMBOL_TABLE * s, char * name) ;

char * typeOf(SYMBOL_TABLE * s, char * name) ;

int indexOf(SYMBOL_TABLE * s, char * name) ;

