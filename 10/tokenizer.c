#include <stdlib.c>
#include "llist.h"

typedef struct codellist {
	llist source;
	snode line;
	char* pos;
} codelist;

enum TOKEN_TYPE {
	T_KEYWORD,
	T_SYMBOL,
	T_IDENTIFIER,
	T_INT_CONST,
	T_STRING_CONST
};

enum KEYWORD {
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

static char cur_token[512] = "";

/* True if there are more tokens */
int hasMoreTokens(codelist *c) {
	return (c->pos || c->line);
}
/* Advance to the next token */
void advance(codelist *c) {
	
}

/* Returns the type of the current token */
enum TOKEN_TYPE tokenType(codelist *c) {

}

/* returns which keyword corresponds to the current token */
enum KEYWORD keyword() {
	if (strcmp(cur_token, "class") == 0)
		return K_CLASS;
	else if (strcmp(cur_token, "method") == 0)
		return K_METHOD;
	else if (strcmp(cur_token, "function") == 0)
		return K_FUNCTION;
	else if (strcmp(cur_token, "constructor") == 0)
		return K_CONSTRUCTOR;
	else if (strcmp(cur_token, "int") == 0)
		return K_INT;
	else if (strcmp(cur_token, "boolean") == 0)
		return K_BOOLEAN;
	else if (strcmp(cur_token, "char") == 0)
		return K_CHAR;
	else if (strcmp(cur_token, "void") == 0)
		return K_VOID;
	else if (strcmp(cur_token, "var") == 0)
		return K_VAR;
	else if (strcmp(cur_token, "static") == 0)
		return K_STATIC;
	else if (strcmp(cur_token, "field") == 0)
		return K_FIELD;
	else if (strcmp(cur_token, "let") == 0)
		return K_LET;
	else if (strcmp(cur_token, "do") == 0)
		return K_DO;
	else if (strcmp(cur_token, "if") == 0)
		return K_IF;
	else if (strcmp(cur_token, "else") == 0)
		return K_ELSE;
	else if (strcmp(cur_token, "while") == 0)
		return K_WHILE;
	else if (strcmp(cur_token, "return") == 0)
		return K_RETURN;
	else if (strcmp(cur_token, "true") == 0)
		return K_TRUE;
	else if (strcmp(cur_token, "false") == 0)
		return K_FALSE;
	else if (strcmp(cur_token, "null") == 0)
		return K_NULL;
	else if (strcmp(cur_token, "this") == 0)
		return K_THIS;
	else
		return -1;

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

