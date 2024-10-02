CC=gcc
CFLAGS=-I.
MACCFLAGS=-largp -L /opt/homebrew/Cellar/argp-standalone/1.5.0/lib/ -I /opt/homebrew/Cellar/argp-standalone/1.5.0/include/

jack-compy: main.c llist.c
	$(CC) -g3 -Wall -o main main.c llist.c tokenizer.c $(CFLAGS)

jack-compy-mac: main.c llist.c
	$(CC) -g3 -Wall -o main main.c llist.c tokenizer.c $(MACCFLAGS)

test: test.c llist.c tokenizer.c
	$(CC) -g3 -Wall -o test test.c llist.c tokenizer.c $(CFLAGS) -lm

test-mac: test.c llist.c tokenizer.c
	$(CC) -g3 -Wall -o test test.c llist.c tokenizer.c $(MACCFLAGS) -lm
