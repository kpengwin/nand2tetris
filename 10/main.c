#include <stdio.h>

typedef struct ll_node {
	char* field;
	struct ll_node *next;
} list;

int main(int argc, char**argv) {
	char hello[] = "Hello";
	char world[] = "World"

	list testlist;
	testlist.field = hello;
	testlist.next = NULL; 

	printf("%s\n", testlist.field);
	return 0;
}
