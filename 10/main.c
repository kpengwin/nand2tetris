#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <argp.h>
#include "llist.h"

const char *argp_program_version = "jack-compy 0.1";
const char *argp_program_bug_address = "<me@kenneth-bruce.com>";

static char doc[] =
	"jack-compy -- compile jack code to hack asm";

static char args_doc[] =
	"JACK_FILE";

static struct argp_option options[] = {
	{"file", 'o', "FILE", 0, "Output filename"},
	{0}
};

struct arguments
{
	char *ifile;
	char *ofile;
};

static error_t parse_opt (int key, char* arg, struct argp_state *state) {
	struct arguments *arguments = state->input;

	switch (key) {
		case 'f':
			arguments->ofile = arg;
			break;
		case ARGP_KEY_ARG:
			if (state->arg_num >= 2) {
				argp_usage (state);
			} else {
				arguments->ifile = arg;
			}
			break;
		case ARGP_KEY_END:
			if (state->arg_num < 1) {
				printf("not enough args arg_num %d\n", state->arg_num);
				argp_usage(state);
			}
			break;
		default:
			return ARGP_ERR_UNKNOWN;
	}
	/*printf("finished switch\n");*/
	return 0;
}

static struct argp argp = { options, parse_opt, args_doc, doc };

char *stripline(char * line) {
	int success=0;
	int start=0;
	int end=0;
	char *result;

	for(int i=0;line[i]!=0; i++) {
		if (success==0) {
			if ((line[i]!=' ') && (line[i]!='\t') && (line[i]!='\n')) {
				success=1;
			} else {
				start++;
			}
		}
		end++;
	}
	if (success) {
		for(int i=end-1;((line[i]=='\n')||(line[i]==' ')||(line[i]=='\t'));i--) {
			end--;
		}
		int nlen = (end-start)+1;
		result = calloc(nlen, sizeof(char));
		strncpy(result,line+start, nlen-1);
	}
	return success ? result : NULL;
}

int main(int argc, char**argv) {

	FILE * fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	sllist* lines = sll_create();
	struct arguments arguments;
	arguments.ifile = "-";
	arguments.ofile = "-";

	argp_parse(&argp, argc, argv, 0, 0, &arguments);

	printf("Running jack compiler with in_file:[%s] out_file:[%s]\n",
		arguments.ifile,
		arguments.ofile);
	fp = fopen(arguments.ifile, "r");
	if (fp==NULL) {
		return 1;
	}

	while ((read = getline(&line, &len, fp)) != -1) {
		char * sstring;
		if ((sstring=stripline(line))) {
			sll_append(lines, sstring);
			free(sstring);
		}
	}

	sll_print(lines);
	sll_rawprint(lines, 1);

	fclose(fp);

	sll_dfree(lines);
	if (line)
		free(line);

	return 0;
}
