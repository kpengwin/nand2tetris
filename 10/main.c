#include <stdlib.h>
#include "llist.h"

int main(int argc, char**argv) {
	char hello[] = "Hello";
	char world[] = "World";

	sllist* mylist = sll_create();
	sll_append(mylist, hello);
	sll_append(mylist, world);
	sll_print(mylist);

	return 0;
}
