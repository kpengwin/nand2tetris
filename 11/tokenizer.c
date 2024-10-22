// External Includes
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

// Project Includes
#include "llist.h"
#include "tokenizer.h"

char SYMBOLS[] = "{}()[].,;+-*/&|<>=~";
int SYM_COUNT = 0;

int STR_LITERAL = 0;

char cur_token[512] = "";
token lastToken;

/* True if there are more tokens */
int hasMoreTokens(codelist *c) {
	return ((*(c->pos) != 0) || (c->line->next != NULL));
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
	lastToken.type = T_NULL;
}

/* Advance to the next token */
int advance(codelist *c) {
	STR_LITERAL = 0;
	cur_token[0] = 0;
	int PAST_COMMENTS_AND_WHITESPACE = 0;
	
	while (!PAST_COMMENTS_AND_WHITESPACE) {
		// Move past any whitespace
		while (char_is_whitespace(*(c->pos)) || ((*c->pos) == 0)) {
			if ((*c->pos) == 0) {
				if (hasMoreTokens(c)) {
					c->line = c->line->next;
					c->pos = &(c->line->field[0]);
				} else {
					return 0;
				}
			} else {
				c->pos++;
			}

		}

		if ((*(c->pos) == '/') &&  (*(c->pos + 1) == '*')) { //Multiline
			int IN_MULTILINE_COMMENT = 1;
			c->pos = c->pos + 2;
			while (IN_MULTILINE_COMMENT) {
				if (*(c->pos) == 0) {
					if (hasMoreTokens(c)) {
						c->line = c->line->next;
						c->pos = &(c->line->field[0]);
					} else {
						return 0;
					}
				} else if ((*(c->pos) == '*') && (*(c->pos+1) == '/')) {
					c->pos = c->pos + 2;
					IN_MULTILINE_COMMENT=0;
				} else {
					c->pos++;
				}
			}
		} else if ((*(c->pos) == '/') && (*(c->pos + 1) == '/')) { //Single line
			c->line = c->line->next;
			c->pos = &(c->line->field[0]);
		} else { //presumably we're at something that's not a comment
			if (hasMoreTokens(c))
				PAST_COMMENTS_AND_WHITESPACE = 1;
		}

	}

	// Symbols are 1 char
	if (char_is_symbol(*(c->pos))){
		cur_token[0] = *(c->pos);
		cur_token[1] = 0;
		c->pos++;
		return 0;
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
		return 0;
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
		return 0;
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
		return 0;
	}

	assert(0 && "failed to advance");
	return 1;
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
enum KEYWORD keyword(void) {
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
char symbol(void) {
	return cur_token[0];
}


/* returns the string of the current token 
 * MUST FREE AFTER USE */
char* identifier(void) {
	size_t len = strlen(cur_token);
	char *identifier = calloc(len+1, sizeof(char));
	strncpy(identifier, cur_token, len);
	return identifier;
}

/* returns the integer value of the current token */
int intVal(void) {
	return atoi(cur_token);
}

/* returns the string value of the current token
* without opening and closing double quotes */
char * stringVal(void) {
	return identifier(); //handle quotes in advance()
}

char * k_to_s(enum KEYWORD word) {
	switch (word) {
		case K_ERR:    // Not a keyword, is an error
			return "err";
		case K_CLASS:
			return "class";
		case K_METHOD:
			return "method";
		case K_FUNCTION:
			return "function";
		case K_CONSTRUCTOR:
			return "constructor";
		case K_INT:
			return "int";
		case K_BOOLEAN:
			return "boolean";
		case K_CHAR:
			return "char";
		case K_VOID:
			return "void";
		case K_VAR:
			return "var";
		case K_STATIC:
			return "static";
		case K_FIELD:
			return "field";
		case K_LET:
			return "let";
		case K_DO:
			return "do";
		case K_IF:
			return "if";
		case K_ELSE:
			return "else";
		case K_WHILE:
			return "while";
		case K_RETURN:
			return "return";
		case K_TRUE:
			return "true";
		case K_FALSE:
			return "false";
		case K_NULL:
			return "null";
		case K_THIS:
			return "this";
	}
	return "";
};

void print_current_token(void) {
	char *t_str;
	lastToken.type = tokenType();
	switch (lastToken.type) {
		case T_NULL:
			break;
		case T_KEYWORD:
			/*strcpy(lastToken.t.str, k_to_s(keyword()));*/
			lastToken.t.kw = keyword();
			printf("<keyword> %s </keyword>\n", k_to_s(lastToken.t.kw));
			break;
		case T_SYMBOL:
			lastToken.t.c = symbol();
			if (lastToken.t.c == '<')
				printf("<symbol> &lt; </symbol>\n");
			else if (lastToken.t.c == '>')
				printf("<symbol> &gt; </symbol>\n");
			else if (lastToken.t.c == '&')
				printf("<symbol> &amp; </symbol>\n");
			else if (lastToken.t.c == '"')
				printf("<symbol> &quot; </symbol>\n");
			else
				printf("<symbol> %c </symbol>\n", lastToken.t.c);
			break;
		case T_IDENTIFIER:
			t_str = identifier();
			strcpy(lastToken.t.str, t_str); // TODO: identifier might be better if we passed in the memory vs allocating
			printf("<identifier> %s </identifier>\n", t_str);
			free(t_str);
			break;
		case T_INT_CONST:
			lastToken.t.val = intVal();
			printf("<integerConstant> %d </integerConstant>\n", lastToken.t.val);
			break;
		case T_STRING_CONST:
			t_str = stringVal();
			strcpy(lastToken.t.str, t_str); // TODO: stringVal might be better if we passed in the memory vs allocating
			printf("<stringConstant> %s </stringConstant>\n", t_str);
			free(t_str);
			break;
	}
}



// token type utilities
char * t_getstr(token *t) {
	assert((t->type == T_IDENTIFIER) || (t->type == T_STRING_CONST));
	return t->t.str;
}

char t_getc(token *t) {
	assert((t->type == T_SYMBOL));
	return t->t.c;
}

KEYWORD t_getkw(token *t) {
	assert((t->type == T_KEYWORD));
	return t->t.kw;
}

int t_getint(token *t) {
	assert((t->type == T_INT_CONST));
	return t->t.val;
}



