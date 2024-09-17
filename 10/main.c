#include <stdio.h>
#include <stdlib.h>
#include <argp.h>
#include "llist.h"

const char *argp_program_version = "jack-compy 0.1";
const char *argp_program_bug_address = "<me@kenneth-bruce.com>";

static char doc[] =
	"jack-compy -- compile jack code to hack asm";

static char args_doc[] =
	"";

static struct argp_option options[] = {
	{"file", 'f', "FILE", 0, "File to compile"},
	{0}
};

struct arguments
{
	char *file;
};

static error_t parse_opt (int key, char* arg, struct argp_state *state) {
	struct arguments *arguments = state->input;

	/*printf("key %d\n", key);*/

	switch (key) {
		case 'f':
			/*printf("arg_num %d arg %s\n", state->arg_num, arg);*/
			arguments->file = arg;
			break;
		case ARGP_KEY_ARG:
			if (state->arg_num > 2) {
				/*printf("too many args arg_num %d\n", state->arg_num);*/
				argp_usage (state);
			}
			//may need to put this on arguments?
			break;
		/*case ARGP_KEY_END: //Copied this from example but it doesn't seem to be correct
			if (state->arg_num < 1) {
				printf("not enough args arg_num %d\n", state->arg_num);
				argp_usage(state);
			}
			break;*/
		default:
			return ARGP_ERR_UNKNOWN;
	}
	/*printf("finished switch\n");*/
	return 0;
}

static struct argp argp = { options, parse_opt, args_doc, doc };

int stripline(char * line, int * start, int * end) {
	int success=0;
	int buf=0;
	*start=0;
	*end=0;

	for(int i=0;line[i]!=0; i++) {
		if (success==0) {
			if ((line[i]==' ')) {
				success=1;
			}
			(*start)++;
		}
		(*end)++;
	}

	return success;
}

int main(int argc, char**argv) {

	FILE * fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	sllist* lines = sll_create();
	struct arguments arguments;
	arguments.file = "./main.c";

	argp_parse(&argp, argc, argv, 0, 0, &arguments);

	fp = fopen(arguments.file, "r");
	if (fp==NULL) {
		return 1;
	}

	while ((read = getline(&line, &len, fp)) != -1) {
		int start, end;
		if (stripline(line, &start, &end)) {
			line[end-1] = 0;
			sll_append(lines, line+start);
		}
	}

	sll_print(lines);

	fclose(fp);

	sll_dfree(lines);
	if (line)
		free(line);

	return 0;
}
