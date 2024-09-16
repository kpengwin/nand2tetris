#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

int main(int argc, char**argv) {

	FILE * fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	sllist* lines = sll_create();

	fp = fopen("./main.c", "r");
	if (fp==NULL) {
		return 1;
	}

	while ((read = getline(&line, &len, fp)) != -1) {
		sll_append(lines, line);
	}

	sll_print(lines);

	fclose(fp);

	sll_dfree(lines);
	if (line)
		free(line);

	return 0;
}
