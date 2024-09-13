#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ll_node {
	char* field;
	struct ll_node *next;
} s_node;

typedef struct s_list {
	s_node* head;
	s_node* tail;
	int len;
} sllist;

// Create a new node with string f_content
s_node* ll_mknode(char* f_content) {
	size_t len = strlen(f_content);
	char* s_copy = malloc(len+1);
	strncpy(s_copy, f_content, len);
	s_node* nnode = malloc(sizeof(s_node));
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
	s_node* node = ll_mknode(f_content);
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

void printList(s_node* head) {
	s_node* mark;
	mark = head;
	printf("[");
	while (mark != NULL) {
		printf("'%s', ", mark->field);
		mark = mark->next; 
	}
	printf("]\n");
}

void sll_print(sllist* list) {
	printList(list->head);
}

int main(int argc, char**argv) {
	char hello[] = "Hello";
	char world[] = "World";

	sllist* mylist = sll_create();
	sll_append(mylist, hello);
	sll_append(mylist, world);
	sll_print(mylist);

	return 0;
}
