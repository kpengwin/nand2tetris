CC=gcc
CFLAGS=-I.
MACCFLAGS=-largp -L /opt/homebrew/Cellar/argp-standalone/1.5.0/lib/ -I /opt/homebrew/Cellar/argp-standalone/1.5.0/include/
SOURCES=main.c llist.c tokenizer.c compile.c symboltable.c
TEST_SOURCES=test.c llist.c tokenizer.c compile.c symboltable.c

jack-compy: $(SOURCES)
	$(CC) -g3 -Wall -o main $(SOURCES) $(CFLAGS)

jack-compy-mac: $(SOURCES)
	$(CC) -g3 -Wall -o main $(SOURCES) $(MACCFLAGS)

test: $(TEST_SOURCES)
	$(CC) -g3 -Wall -o test $(TEST_SOURCES) $(CFLAGS) -lm

test-mac: $(TEST_SOURCES)
	$(CC) -g3 -Wall -o test $(TEST_SOURCES) $(MACCFLAGS) -lm
