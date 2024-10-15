#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <argp.h>
#include "compile.h"
#include "llist.h"
#include "tokenizer.h"

const char *argp_program_version = "jack-compy 0.2";
const char *argp_program_bug_address = "<me@kenneth-bruce.com>";

static char doc[] =
	"jack-compy -- compile jack code to jackvm code";

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
			if (state->arg_num >= 1) {
				argp_usage (state);
			} else {
				arguments->ifile = arg;
			}
			break;
		case ARGP_KEY_END:
			if (state->arg_num < 1) {
				argp_usage(state);
			}
			break;
		default:
			return ARGP_ERR_UNKNOWN;
	}
	return 0;
}

static struct argp argp = { options, parse_opt, args_doc, doc };

char *stripline(char * line) {
	int success=0;
	int start=0;
	int end=0;
	char *result;

	for(int i=0;line[i]!=0; i++) {
		if (!success) {
			if (!char_is_whitespace(line[i])) {
				success=1;
			} else {
				start++;
			}
		}
		end++;
	}
	if (success) {
		for(int i=end-1;char_is_whitespace(line[i]);i--) {
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
	fp = fopen(arguments.ifile, "r");
	if (fp==NULL) {
		printf("Error opening file [%s]\n", arguments.ifile);
		return 1;
	}

	while ((read = getline(&line, &len, fp)) != -1) {
		char * sstring;
		if ((sstring=stripline(line))) {
			sll_append(lines, sstring);
			free(sstring);
		}
	}

	codelist code_list;
	code_list.source = *lines;
	code_list.line = code_list.source.head;
	code_list.pos = &(code_list.line->field[0]);

	init_tokenizer();
	initializeCompiler(&code_list);
	advance(&code_list);
	compileClass();

	fclose(fp);

	sll_dfree(lines);
	if (line)
		free(line);

	return 0;
}
