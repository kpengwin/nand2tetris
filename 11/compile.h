#ifndef compile_h
#include "tokenizer.h"
#include "symboltable.h"

typedef enum {
	DECLARE,
	USE,
} USAGE;

void initializeCompiler(codelist *code, SYMBOL_TABLE *CLASS_TABLE, SYMBOL_TABLE *SUB_TABLE) ;

/* Compiles a complete class */
void compileClass() ;

/* Compiles a static variable or field declarations*/
void compileClassVarDec() ;

/* Compiles a complete method, function, or constructor*/
void compileSubroutine() ;

/* Compiles a possibly empty parameter list. Does not handle the 
 * enclosing parenthesis tokens ( and ) */
void compileParameterList() ;

/* Compiles a subroutine's body */
void compileSubroutineBody() ;

/* Compiles a var declaration */
void compileVarDec() ;

/* Compiles a sequence of statements. Does not handle the ennclosing
 * curly bracket tokens ; */
void compileStatements() ;

/* Compiles a let statement */
void compileLet() ;

/* Compiles an if statement possibly with a trailing else clause */
void compileIf() ;

/* Compiles a while statement */
void compileWhile() ;

/* Compiles do statement */
void compileDo() ;

/* Compiles a return statement */
void compileReturn() ;

/* Compiles an expression */
void compileExpression() ;

/* Compiles a 'term' If the current token is an 
 *	- identifier, it is resolved into one of:
 *		- variable
 *		- array element
 *		- subroutine call
 *
 * A single lookahead token, which may be [, (, or . suffices
 * to distinguish between the possibilities. Any other token 
 * is not part of this term and should not be advanced over */
void compileTerm() ;

/* Compiles a (possibly empty) comma-separated list of expressions
 * Returns the number of expressions in the list */
int compileExpressionList() ;

#define compile_h
#endif


