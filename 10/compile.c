// External Includes
#include <stdio.h>
#include <assert.h>

// Project Includes
#include "compile.h"
#include "tokenizer.h"

#define requireT(assertion, err_msg, tag) {\
	assert(assertion && err_msg);\
	printf("%s", tag);\
	print_current_token();\
	advance(CODE);\
}

codelist *CODE;

void initializeCompiler(codelist *code) {
	CODE = code;
	return;
}

/* Compiles a complete class */
void compileClass() {
	requireT(isKeywordX(K_CLASS),
		  "must start with class dec",
		  "<class>\n");
	requireT(isIdentifier(), 
		  "missing class name", "");
	requireT(isSymbolX('{'),
		  "missing { in class", "");
	while (isKeywordX(K_STATIC) || isKeywordX(K_FIELD)) {
		compileClassVarDec();
	}
	while (isKeywordX(K_CONSTRUCTOR) || isKeywordX(K_FUNCTION) || isKeywordX(K_METHOD)) {
		compileSubroutine();
	}
	requireT(isSymbolX('}'),
		  "missing } in class", "");
	printf("</class>\n");
	return;
}

/* Compiles a static variable or field declarations*/
void compileClassVarDec() {
	requireT((isKeywordX(K_STATIC) || isKeywordX(K_FIELD)),
		  "var dec should be 'static' or 'field'",
		  "<classVarDec>\n");
	requireT(isIdentifier(),
		  "missing type def", "");
	requireT(isIdentifier(),
		  "missing var name", "");
	// TODO: also need to support multiple var declaration
	requireT(isSymbolX(';'),
		  "var dec must end with ';'", "");
	printf("</classVarDec>\n");
	return;
}

/* Compiles a complete method, function, or constructor*/
void compileSubroutine() {
	requireT((isKeywordX(K_CONSTRUCTOR) || isKeywordX(K_FUNCTION) || isKeywordX(K_METHOD)),
		  "subroutine dec should be 'constructor' or 'function' or 'method'",
		  "<subroutineDec>\n");
	requireT(isIdentifier(),
		  "missing type def", "");
	requireT(isIdentifier(),
		  "missing subroutine name", "");
	requireT(isSymbolX('('),
		  "missing '(' in subroutine paremeter list", "");
	compileParameterList();
	requireT(isSymbolX(')'),
		  "missing ')' in subroutine paremeter list", "");
	compileSubroutineBody();
	printf("</subroutineDec>\n");
	return;
}

/* Compiles a possibly empty parameter list. Does not handle the 
 * enclosing parenthesis tokens ( and ) */
void compileParameterList() {
	printf("<parameterList>\n");
	if (isSymbolX(')')) {
		printf("</parameterList>\n");
		return;
	} else { // TODO: need to handle more than one comma sep
		requireT(isIdentifier(),
		   "missing type def", "");
		requireT(isIdentifier(),
		   "missing var name", "");
	}
	printf("</parameterList>\n");
	return;
}

/* Compiles a subroutine's body */
void compileSubroutineBody() {
	requireT(isSymbolX('{'),
		  "subroutine body must start with {",
		  "<subroutineBody>\n");
	while (isKeywordX(K_VAR)) {
		compileVarDec();
	}
	compileStatements();
	requireT(isSymbolX('}'),
		  "subroutine body must end with }", "");
	printf("</subroutineBody>\n");
	return;
}

/* Compiles a var declaration */
void compileVarDec() {
	requireT(isKeywordX(K_VAR),
		  "compileVarDec() called without var keyword", "<varDec>\n");
	requireT(isIdentifier(),
		  "missing type def", "");
	requireT(isIdentifier(),
		  "missing var name", "");
	// TODO: also need to support multiple var declaration
	requireT(isSymbolX(';'),
		  "var dec must end with ';'", "");
	printf("</varDec>\n");
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
	requireT(isKeywordX(K_LET),
		  "compileLet() called with non-let statement",
		  "<letStatement>\n");
	requireT((tokenType() == T_IDENTIFIER),
		  "Let can only assign to an identifier", "");
	requireT(isSymbolX('='),
		  "Let statement must include '='", "");
	compileExpression();
	requireT(isSymbolX(';'),
		  "Let statement must be terminated by a ';'", "");
	printf("</letStatement>\n");
	return;
}

/* Compiles an if statement possibly with a trailing else clause */
void compileIf() {
	requireT(isKeywordX(K_IF),
		  "compileIf() called with non-if statement",
		  "<ifStatement>\n");
	requireT(isSymbolX('('),
		  "missing '(' in if statement", "");
	compileExpression();
	requireT(isSymbolX(')'),
		  "missing ')' in if statement", "");
	requireT(isSymbolX('{'),
		  "missing '{' in if statement", "");
	compileStatements();
	requireT(isSymbolX('}'),
		  "missing '}' in if statement", "");

	if (isKeywordX(K_ELSE)) {
		print_current_token();
		advance(CODE);

		requireT(isSymbolX('{'),
		   "missing '{' in else statement", "");
		compileStatements();
		requireT(isSymbolX('}'),
		   "missing '}' in else statement", "");
	}
	printf("</ifStatement>\n");
	return;
}

/* Compiles a while statement */
void compileWhile() {
	requireT(isKeywordX(K_WHILE),
		  "compileWhile() called with non-while statement",
		  "<whileStatement>\n");
	requireT(isSymbolX('('),
		  "missing '(' in while statement", "");
	compileExpression();
	requireT(isSymbolX(')'),
		  "missing ')' in while statement", "");
	requireT(isSymbolX('{'),
		  "missing '{' in while statement", "");
	compileStatements();
	requireT(isSymbolX('}'),
		  "missing '}' in while statement", "");
	printf("</whileStatement>\n");
	return;
}

/* Compiles do statement */
void compileDo() {
	requireT(isKeywordX(K_DO),
		  "compileDo() called with non-do statement",
		  "<doStatement>\n");
	requireT(isIdentifier(),
		  "must be either subroutine name or classname", "");
	if isSymbolX('.') {
		requireT(isSymbolX('.'), "", "");
		requireT(isIdentifier(),
		   "must follow . with subroutine name", "");
		requireT(isSymbolX('('), "missing (", "");
		compileExpressionList();
		requireT(isSymbolX(')'), "missing )", "");
	} else if isSymbolX('(') {
		requireT(isSymbolX('('), "missing (", "");
		compileExpressionList();
		requireT(isSymbolX(')'), "missing )", "");
	}
	requireT(isSymbolX(';'),
		  "Do statement must be terminated by a ';'", "");
	printf("</doStatement>\n");
	return;
}

/* Compiles a return statement */
void compileReturn() {
	requireT(isKeywordX(K_RETURN),
		  "compileReturn() called with non-return statement",
		  "<returnStatement>\n");
	//optional expression
	if (tokenType() != T_SYMBOL){
		compileExpression();
	}
	requireT(isSymbolX(';'),
		  "Return statement must be terminated by a ';'", "");
	printf("</returnStatement>\n");
	return;
}

/* Compiles an expression */
void compileExpression() {
	printf("<expression>\n");
	compileTerm();
	printf("</expression>\n");
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
	printf("<expression>\n");
	requireT(isIdentifier(),
		  "must have an identifier", "");
	printf("</expression>\n");
	return;
}

/* Compiles a (possibly empty) comma-separated list of expressions
 * Returns the number of expressions in the list */
int compileExpressionList() {
	printf("<expressionList>\n");
	printf("</expressionList>\n");
	return 0;
}

