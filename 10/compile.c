// External Includes
#include <stdio.h>

// Project Includes
#include "compile.h"
#include "tokenizer.h"
/*#include "tokenizer.h"*/

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

/* Compiles a sequence of statements. Does not handle the ennclosing
 * curly bracket tokens { and } */
void compileStatements() {
	return;
}

/* Compiles a let statement */
void compileLet() {
	return;
}

/* Compiles an if statement possibly with a trailing else clause */
void compileIf() {
	return;
}

/* Compiles a while statement */
void compileWhile() {
	return;
}

/* Compiles do statement */
void compileDo() {
	return;
}

/* Compiles a return statement */
void compileReturn() {
	printf("<returnStatement>\n");
	printf("<keyword> %s </keyword>\n", k_to_s(keyword()));
	advance(CODE);
	if (tokenType() != T_SYMBOL){
		compileExpression();
	}
	
	// TODO: assert this
	if ((tokenType() == T_SYMBOL) && (symbol() == ';'))
		printf("<symbol> ; <symbol>\n");
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

