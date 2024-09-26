#ifndef tokenizer_h
#include "llist.h"

typedef struct codellist {
	sllist source;
	snode* line;
	char* pos;
} codelist;

enum TOKEN_TYPE {
	T_NULL,
	T_KEYWORD,
	T_SYMBOL,
	T_IDENTIFIER,
	T_INT_CONST,
	T_STRING_CONST
};

enum KEYWORD {
	K_ERR,    // Not a keyword, is an error
	K_CLASS,
	K_METHOD,
	K_FUNCTION,
	K_CONSTRUCTOR,
	K_INT,
	K_BOOLEAN,
	K_CHAR,
	K_VOID,
	K_VAR,
	K_STATIC,
	K_FIELD,
	K_LET,
	K_DO,
	K_IF,
	K_ELSE,
	K_WHILE,
	K_RETURN,
	K_TRUE,
	K_FALSE,
	K_NULL,
	K_THIS
};

// must call before using tokenizer
void init_tokenizer() ;

/* True if there are more tokens */
int hasMoreTokens(codelist *c) ;

int char_is_whitespace(char c) ;

int char_is_int(char c) ;

int char_is_symbol(char c) ;

int char_is_alphabet(char c) ;


/* Advance to the next token */
void advance(codelist *c) ;

/* Returns the type of the current token */
enum TOKEN_TYPE tokenType(codelist *c) ;

/* returns which keyword corresponds to the current token */
enum KEYWORD keyword() ;


/* returns the character of the current token */
char symbol() ;


/* returns the string of the current token 
 * MUST FREE AFTER USE */
char* identifier() ;

/* returns the integer value of the current token */
int intVal() ;

/* returns the string value of the current token
* without opening and closing double quotes */
char * stringVal() ;
#define tokenizer_h
#endif


