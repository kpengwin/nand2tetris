#ifndef tokenizer_h
#include "llist.h"

typedef struct codellist {
	sllist source;
	snode* line;
	char* pos;
} codelist;

typedef enum TOKEN_TYPE {
	T_NULL,
	T_KEYWORD,
	T_SYMBOL,
	T_IDENTIFIER,
	T_INT_CONST,
	T_STRING_CONST
} TOKEN_TYPE;

typedef enum KEYWORD {
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
} KEYWORD;

typedef union {
	char str[512];
	int val;
	KEYWORD kw;
	char c;
} tokenHolder;

typedef struct {
	TOKEN_TYPE type;
	tokenHolder t;
} token;

extern int  STR_LITERAL;
extern char cur_token[512];
extern token lastToken;

// must call before using tokenizer
void init_tokenizer(void) ;

/* True if there are more tokens */
int hasMoreTokens(codelist *c) ;

int char_is_whitespace(char c) ;

int char_is_int(char c) ;

int char_is_symbol(char c) ;

int char_is_alphabet(char c) ;


/* Advance to the next token */
int advance(codelist *c) ;

/* Returns the type of the current token */
TOKEN_TYPE tokenType(void) ;

/* returns which keyword corresponds to the current token */
KEYWORD keyword(void) ;


/* returns the character of the current token */
char symbol(void) ;


/* returns the string of the current token 
 * MUST FREE AFTER USE */
char* identifier(void) ;

/* returns the integer value of the current token */
int intVal(void) ;

/* returns the string value of the current token
* without opening and closing double quotes */
char * stringVal(void) ;

char * k_to_s(enum KEYWORD word) ;

/* Outputs the current token with xml tags */
void print_current_token(void) ;

#define isSymbolX(s) ((tokenType() == T_SYMBOL) && (symbol() == s))
#define isKeywordX(k) ((tokenType() == T_KEYWORD) && (keyword() == k))
#define isIdentifier() (tokenType() == T_IDENTIFIER)
#define isType() (isKeywordX(K_INT) || isKeywordX(K_CHAR) || isKeywordX(K_BOOLEAN) || isKeywordX(K_VOID) || isIdentifier() )
#define isIntConst() (tokenType() == T_INT_CONST)
#define isStrConst() (tokenType() == T_STRING_CONST)
#define isKwConst() (isKeywordX(K_TRUE) || isKeywordX(K_FALSE) || isKeywordX(K_NULL) || isKeywordX(K_THIS))
#define isUnaryOp() (isSymbolX('-') || isSymbolX('|') || isSymbolX('~'))

#define tokenizer_h
#endif


