// External Includes
#include <stdio.h>
#include <assert.h>

// Project Includes
#include "compile.h"
#include "tokenizer.h"


codelist *CODE;

void initializeCompiler(codelist *code) {
	CODE = code;
	return;
}

/* Compiles a complete class */
void compileClass() {
	return;
}

/* Compiles a static variable or field declarations*/
void compileClassVarDec() {
	return;
}

/* Compiles a complete method, function, or constructor*/
void compileSubroutine() {
	return;
}

/* Compiles a possibly empty parameter list. Does not handle the 
 * enclosing parenthesis tokens ( and ) */
void compileParameterList() {
	return;
}

/* Compiles a subroutine's body */
void compileSubroutineBody() {
	return;
}

/* Compiles a var declaration */
void compileVarDec() {
	return;
}

/* Compiles a sequence of statements. Does not handle the enclosing
 * curly bracket tokens { and } */
void compileStatements() {
	for(;;) {
		if (tokenType() != T_KEYWORD)
			break;
		switch (keyword()) {
			case K_LET:
				compileLet();
			case K_IF:
				compileIf();
			case K_WHILE:
				compileWhile();
			case K_DO:
				compileDo();
			case K_RETURN:
				compileReturn();
			default:
				break;
		}
	}
	return;
}

/* Compiles a let statement */
void compileLet() {
	assert(isKeywordX(K_LET) &&
		"ERROR: compileLet() called with non-let statement");
	
	printf("<let>\n");
	print_current_token();
	advance(CODE);
	
	assert((tokenType() == T_IDENTIFIER) &&
		"ERROR: Let can only assign to an identifier");
	print_current_token();
	advance(CODE);

	assert(isSymbolX('=') &&
		"Let statement must include '='");
	print_current_token();
	advance(CODE);

	compileExpression();

	assert(isSymbolX(';') &&
		"Let statement must be terminated by a ';'");
	print_current_token();
	advance(CODE);

	return;
}

/* Compiles an if statement possibly with a trailing else clause */
void compileIf() {
	assert(isKeywordX(K_IF) &&
		"ERROR: compileIf() called with non-if statement");
	
	printf("<ifStatement>\n");
	print_current_token();
	advance(CODE);

	assert(isSymbolX('(') &&
		"ERROR: missing '(' in if statement");
	print_current_token();
	advance(CODE);

	compileExpression();

	assert(isSymbolX(')') &&
		"ERROR: missing ')' in if statement");
	print_current_token();
	advance(CODE);

	assert(isSymbolX('{') &&
		"ERROR: missing '{' in if statement");
	print_current_token();
	advance(CODE);

	compileStatements();

	assert(isSymbolX('}') &&
		"ERROR: missing '}' in if statement");
	print_current_token();
	advance(CODE);

	if (isKeywordX(K_ELSE)) {
		print_current_token();
		advance(CODE);

		assert(isSymbolX('{') &&
		 "ERROR: missing '{' in if statement");
		print_current_token();
		advance(CODE);

		compileStatements();

		assert(isSymbolX('}') &&
		 "ERROR: missing '}' in if statement");
		print_current_token();
		advance(CODE);
	}

	printf("</ifStatement>\n");

	return;
}

/* Compiles a while statement */
void compileWhile() {
	assert(isKeywordX(K_WHILE) &&
		"ERROR: compileWhile() called with non-while statement");
	
	printf("<whileStatement>\n");
	print_current_token();
	advance(CODE);

	assert(isSymbolX('(') &&
		"ERROR: missing '(' in while statement");
	print_current_token();
	advance(CODE);

	compileExpression();

	assert(isSymbolX(')') &&
		"ERROR: missing ')' in while statement");
	print_current_token();
	advance(CODE);

	assert(isSymbolX('{') &&
		"ERROR: missing '{' in while statement");
	print_current_token();
	advance(CODE);

	compileStatements();

	assert(isSymbolX('}') &&
		"ERROR: missing '}' in while statement");
	print_current_token();
	advance(CODE);

	printf("</whileStatement>\n");
	return;
}

/* Compiles do statement */
void compileDo() {
	assert(isKeywordX(K_DO) &&
		"ERROR: compileDo() called with non-do statement");
	
	printf("<doStatement>\n");
	print_current_token();
	advance(CODE);

	compileExpression();

	assert(isSymbolX(';') &&
		"Do statement must be terminated by a ';'");

	print_current_token();
	advance(CODE);
	printf("</doStatement>\n");
	return;
}

/* Compiles a return statement */
void compileReturn() {
	assert(isKeywordX(K_RETURN) && 
		"ERROR: compileReturn() called with non-return statement");
	
	printf("<returnStatement>\n");
	print_current_token();
	advance(CODE);

	//optional expression
	if (tokenType() != T_SYMBOL){
		compileExpression();
	}
	
	assert(isSymbolX(';') &&
		"Return statement must be terminated by a ';'");

	print_current_token();
	advance(CODE);
	printf("</returnStatement>\n");
	return;
}

/* Compiles an expression */
void compileExpression() {
	return;
}

/* Compiles a 'term' If the current token is an 
 *	- identifier, it is resolved into one of:
 *		- variable
 *		- array element
 *		- subroutine call
 *
 * A single lookahead token, which may be [, (, or . suffices
 * to distinguish between the possibilities. Any other token 
 * is not part of this term and should not be advanced over */
void compileTerm() {
	return;
}

/* Compiles a (possibly empty) comma-separated list of expressions
 * Returns the number of expressions in the list */
int compileExpressionList() {
	return 0;
}

