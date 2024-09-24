#include <stdlib.c>
#include "llist.h"

typedef struct codellist {
	llist source;
	snode line;
	char* pos;
} codelist;

enum TOKEN_TYPE {
	KEYWORD,
	SYMBOL,
	IDENTIFIER,
	INT_CONST,
	STRING_CONST
};

enum KEYWORD {
	K_CLASS,
	METHOD,
	FUNCTION,
	CONSTRUCTOR,
	INT,
	BOOLEAN,
	CHAR,
	VOID,
	VAR,
	STATIC,
	FIELD,
	LET,
	DO,
	IF,
	ELSE,
	WHILE,
	RETURN,
	TRUE,
	FALSE,
	NULL,
	THIS
};

static char cur_token[512] = "";

/* True if there are more tokens */
int hasMoreTokens(codelist *c) {
	return (c->pos || c->line);
}
/* Advance to the next token */
void advance(codelist *c) {
	
}

/* Returns the type of the current token */
enum TOKEN_TYPE tokenType(codeilist *c) {

}

/* returns which keyword corresponds to the current token */
enum KEYWORD keyword() {
	switch (cur_token) {
	case "class";	
		return CLASS;
		return METHOD;
		return FUNCTION;
		return CONSTRUCTOR;
		return INT;
		return BOOLEAN;
		return CHAR;
		return VOID;
		return VAR;
		return STATIC;
		return FIELD;
		return LET;
		return DO;
		return IF;
		return ELSE;
		return WHILE;
		return RETURN;
		return TRUE;
		return FALSE;
		return NULL;
		return THIS;

	}

}


/* returns the character of the current token */
char symbol() {
	return *cur_token[0];
}


/* returns the string of the current token 
 * MUST FREE AFTER USE */
char* identifier() {
	size_t len = strlen(cur_token);
	char *identifier = calloc(len+1, sizeof(char));
	strncpy(identifier, cur_token, len);
	return identifier;
}

/* returns the integer value of the current token */
int intVal() {
	return atoi(cur_token);
}

/* returns the string value of the current token
* without opening and closing double quotes */
char * stringVal() {
	return identifier(); //handle quotes in advance()
}

