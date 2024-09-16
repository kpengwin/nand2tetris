#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "llist.h"

// Create a new node with string f_content
snode* ll_mknode(char* f_content) {
	size_t len = strlen(f_content);
	char* s_copy = malloc(len+1);
	strncpy(s_copy, f_content, len);
	snode* nnode = malloc(sizeof(snode));
	nnode->field = s_copy;
	nnode->next = NULL;
	return nnode;
}

//sllist operations: create, append, remove

sllist* sll_create() {
	sllist* n_list = malloc(sizeof(sllist));
	n_list->head = NULL;
	n_list->tail = NULL;
	n_list->len = 0;
	return n_list;
}

void sll_append(sllist* list, char* f_content) {
	snode* node = ll_mknode(f_content);
	if (list->head == NULL) {
		list->head = node;
	}
	if (list->tail == NULL) {
		list->tail = node;
	} else {
		list->tail->next = node;
		list->tail = node;
	}
	list->len += 1;
}

void printList(snode* head) {
	snode* mark;
	mark = head;
	printf("[");
	while (mark != NULL) {
		if (mark->next == NULL) {
			printf("'%s'", mark->field);
		} else {
			printf("'%s', ", mark->field);
		}
		mark = mark->next; 
	}
	printf("]\n");
}

void sll_print(sllist* list) {
	printList(list->head);
}

