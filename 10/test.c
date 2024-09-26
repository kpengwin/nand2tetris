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
	EXPECT_TRUE(1);
}
