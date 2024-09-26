CC=gcc
CFLAGS=-I.


jack-compy: main.c llist.c
	$(CC) -g3 -Wall -o main main.c llist.c $(CFLAGS)

test: test.c llist.c tokenizer.c
	$(CC) -g3 -Wall -lm -o test test.c llist.c tokenizer.c $(CFLAGS)
