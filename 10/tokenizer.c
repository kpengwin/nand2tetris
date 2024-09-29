// External Includes
#include <stdlib.h>
#include <string.h>

// Project Includes
#include "llist.h"
#include "tokenizer.h"

char SYMBOLS[] = "{}()[].,;+-*/&|<>=~";
int SYM_COUNT = 0;

int STR_LITERAL = 0;

char cur_token[512] = "";

/* True if there are more tokens */
int hasMoreTokens(codelist *c) {
	return ((c->pos != NULL) || (c->line != NULL));
}

int char_is_whitespace(char c) {
	return ((c == '\n') || (c == ' ') || (c == '\t'));
}

int char_is_int(char c) {
	return (c >= '0' && c <= '9');
}

int char_is_symbol(char c) {
	for (int i=0;i<SYM_COUNT;i++) {
		if (SYMBOLS[i]==c)
			return 1;
	}
	return 0;
}

int char_is_alphabet(char c) {
	return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}

void init_tokenizer() {
	SYM_COUNT = strlen(SYMBOLS);
}

/* Advance to the next token */
void advance(codelist *c) {
	STR_LITERAL = 0;
	cur_token[0] = 0;

	// Move past any whitespace
	// TODO: Also move past comments
	while (char_is_whitespace(*(c->pos)) || ((*c->pos) == 0)) {
		if ((*c->pos) == 0) {
			if (hasMoreTokens(c)) {
				c->line = c->line->next;
				c->pos = &(c->line->field[0]);
			} else {
				return;
			}
		} else {
			c->pos++;
		}

	}

	// Symbols are 1 char
	if (char_is_symbol(*(c->pos))){
		cur_token[0] = *(c->pos);
		cur_token[1] = 0;
		c->pos++;
		return;
	}

	// Ints are uninterupted string of ints
	if (char_is_int(*(c->pos))){
		int i=0;
		do {
			cur_token[i] = *(c->pos);
			i++;
			c->pos++;
		} while(char_is_int(*(c->pos)));
		cur_token[i]=0;
		return;
	}

	// Quoted string
	if (*(c->pos) == '"') {
		c->pos++;
		int i = 0;
		while (*(c->pos) != '"') {
			cur_token[i] = *(c->pos);
			i++;
			c->pos++;
		}
		c->pos++; //move past closing '"'
		cur_token[i]=0;
		STR_LITERAL = 1; // Flag set
		return;
	}

	// Otherwise it should be either a keyword or an identifier, either is copied literally
	if (char_is_alphabet(*(c->pos)) || (*(c->pos) == '_')) {
		int i = 0;
		while (char_is_alphabet(*(c->pos)) || (*(c->pos) == '_') || char_is_int(*(c->pos))) {
			cur_token[i] = *(c->pos);
			i++;
			c->pos++;
		}
		cur_token[i]=0;
		return;
	}

	return; // TODO: replace this with an error, as we should never get here.
}

/* Returns the type of the current token */
enum TOKEN_TYPE tokenType(void) {

	// Check if we actually have no token left
	if (cur_token[0] == 0) {
		return T_NULL;
	}

	// Check for valid keyword
	if (keyword())
		return T_KEYWORD;

	// Check if matches a symbol
	if (char_is_symbol(cur_token[0]))
		return T_SYMBOL;

	// Check if it starts with a number
	if (char_is_int(cur_token[0]))
		return T_INT_CONST;

	// Check if STR_LITERAL flag set
	if (STR_LITERAL)
		return T_STRING_CONST;

	// By default, it's an identifier
	return T_IDENTIFIER;
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
		return K_ERR;

}


/* returns the character of the current token */
char symbol() {
	return cur_token[0];
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

