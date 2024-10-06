// External Includes
#include <stdlib.h>
#include <stdio.h>

// rktest
#define DEFINE_RKTEST_IMPLEMENTATION
#include "rktest/rktest.h"

// Project Includes
#include "llist.h"
#include "tokenizer.h"


int main(int argc, const char**argv) {
	return rktest_main(argc, argv);
}

TEST(token_tests, can_init) {
	init_tokenizer();
	EXPECT_TRUE(1); // Just confirm we got past init
}

TEST(token_tests, char_is_whitespace_true) {
	EXPECT_TRUE(char_is_whitespace(' '));
}

TEST(token_tests, char_is_whitespace_false) {
	EXPECT_FALSE(char_is_whitespace('c'));
}

TEST(token_tests, char_is_int_true) {
	EXPECT_TRUE(char_is_int('7'));
}

TEST(token_tests, char_is_int_false) {
	EXPECT_FALSE(char_is_int('c'));
}

TEST(token_tests, char_is_symbol_true) {
	EXPECT_TRUE(char_is_symbol('{'));
}

TEST(token_tests, char_is_symbol_false) {
	EXPECT_FALSE(char_is_symbol('a'));
}


TEST(token_tests, char_is_alphabet_true) {
	EXPECT_TRUE(char_is_alphabet('a'));
}

TEST(token_tests, char_is_alphabet_false) {
	EXPECT_FALSE(char_is_alphabet('9'));
}

TEST(token_tests, token_is_null) {
	cur_token[0] = 0;
	EXPECT_EQ(tokenType(), T_NULL);
}

TEST(token_tests, token_is_keyword) {
	strcpy(cur_token, "class");
	EXPECT_EQ(tokenType(), T_KEYWORD);
}

TEST(token_tests, token_is_symbol) {
	strcpy(cur_token, "+");
	EXPECT_EQ(tokenType(), T_SYMBOL);
}

TEST(token_tests, token_is_int_const) {
	strcpy(cur_token, "14788");
	EXPECT_EQ(tokenType(), T_INT_CONST);
}

TEST(token_tests, token_is_str_literal) {
	STR_LITERAL=1;
	strcpy(cur_token, "hello this is a string literal");
	EXPECT_EQ(tokenType(), T_STRING_CONST);
}

TEST(token_tests, token_is_identifier) {
	STR_LITERAL=0;
	strcpy(cur_token, "silly_name");
	EXPECT_EQ(tokenType(), T_IDENTIFIER);
}

TEST(token_tests, token_return_keyword) {
	strcpy(cur_token, "class");
	EXPECT_EQ(keyword(), K_CLASS);
}

TEST(token_tests, token_return_symbol) {
	strcpy(cur_token, "+");
	EXPECT_EQ(symbol(), '+');
}

TEST(token_tests, token_return_int_const) {
	strcpy(cur_token, "14788");
	EXPECT_EQ(intVal(), 14788);
}

TEST(token_tests, token_return_str_literal) {
	STR_LITERAL=1;
	strcpy(cur_token, "hello this is a string literal");
	printf("Recieved value [%s]\n", stringVal());
	EXPECT_TRUE(strcmp(stringVal(), "hello this is a string literal") == 0);
}

TEST(token_tests, token_return_identifier) {
	STR_LITERAL=0;
	strcpy(cur_token, "silly_name");
	printf("Recieved value [%s]\n", identifier());
	EXPECT_TRUE(strcmp(identifier(), "silly_name") == 0);
}

TEST(token_tests, token_parse_line) {
	sllist *test_code = sll_create();
	//not supposed to be valid syntax
	sll_append(test_code, "- 23444 while \"testing the thing\" func_name()");
	struct codellist test_code_list;
	test_code_list.source = *test_code;
	test_code_list.line = test_code_list.source.head;
	test_code_list.pos = &(test_code_list.line->field[0]);
	EXPECT_EQ(*test_code_list.pos, '-');

	printf("Parsing line: [%s]\n", test_code_list.line->field);

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_SYMBOL);
	printf("<SYMBOL>%c</SYMBOL>\n", symbol());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_INT_CONST);
	printf("<INT_CONST>%d</INT_CONST>\n", intVal());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_KEYWORD);
	printf("<KEYWORD>%d</KEYWORD>\n", keyword());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_STRING_CONST);
	printf("<STRING_CONST>%s</STRING_CONST>\n", stringVal());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_IDENTIFIER);
	printf("<IDENTIFIER>%s</IDENTIFIER>\n", identifier());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_SYMBOL);
	printf("<SYMBOL>%c</SYMBOL>\n", symbol());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_SYMBOL);
	printf("<SYMBOL>%c</SYMBOL>\n", symbol());
}

TEST(token_tests, token_parse_line2) {
	sllist *test_code = sll_create();
	//not supposed to be valid syntax
	sll_append(test_code, "class Main {");
	struct codellist test_code_list;
	test_code_list.source = *test_code;
	test_code_list.line = test_code_list.source.head;
	test_code_list.pos = &(test_code_list.line->field[0]);
	EXPECT_EQ(*test_code_list.pos, 'c');

	printf("Parsing line: [%s]\n", test_code_list.line->field);

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_KEYWORD);
	printf("<KEYWORD>%d</KEYWORD>\n", keyword());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_IDENTIFIER);
	printf("<IDENTIFIER>%s</IDENTIFIER>\n", identifier());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_SYMBOL);
	printf("<SYMBOL>%c</SYMBOL>\n", symbol());
}

TEST(token_tests, token_parse_lines) {
	sllist *test_code = sll_create();
	//not supposed to be valid syntax
	sll_append(test_code, "-");
	sll_append(test_code, "23444");
	struct codellist test_code_list;
	test_code_list.source = *test_code;
	test_code_list.line = test_code_list.source.head;
	test_code_list.pos = &(test_code_list.line->field[0]);
	EXPECT_EQ(*test_code_list.pos, '-');

	printf("Parsing line: [%s]\n", test_code_list.line->field);

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_SYMBOL);
	printf("<SYMBOL>%c</SYMBOL>\n", symbol());

	advance(&test_code_list);
	printf("Parsing line: [%s]\n", test_code_list.line->field);
	EXPECT_EQ(tokenType(), T_INT_CONST);
	printf("<INT_CONST>%d</INT_CONST>\n", intVal());
}

TEST(token_tests, token_parse_lines_with_comments) {
	sllist *test_code = sll_create();
	//not supposed to be valid syntax
	sll_append(test_code, "// Test comment");
	sll_append(test_code, "-");
	sll_append(test_code, "/* begin multiline comment");
	sll_append(test_code, "end multiline comment */");
	sll_append(test_code, "//another comment just to screw with things");
	sll_append(test_code, "23444");
	struct codellist test_code_list;
	test_code_list.source = *test_code;
	test_code_list.line = test_code_list.source.head;
	test_code_list.pos = &(test_code_list.line->field[0]);
	EXPECT_EQ(*test_code_list.pos, '/');

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_SYMBOL);
	printf("<SYMBOL>%c</SYMBOL>\n", symbol());

	advance(&test_code_list);
	EXPECT_EQ(tokenType(), T_INT_CONST);
	printf("<INT_CONST>%d</INT_CONST>\n", intVal());
}

