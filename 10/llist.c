#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "llist.h"

// Create a new node with string f_content
snode* ll_mknode(char* f_content) {
	size_t len = strlen(f_content);
	char* s_copy = calloc(len+1, sizeof(char)); //init mem to 0
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

int sll_insertatindex(sllist* list, char* content, int index) {
	if ( (index>list->len) || (index < 0) ) {
		return -1; // ERR index too big
	} // Don't traverse the list if we know it won't work
	
	snode *cur, *prev;
	for (cur=list->head, prev=NULL; index ; index--, prev=cur, cur=cur->next) {
		if (cur == NULL)
			return -1; //We hit the end
	}
	snode* nnode = ll_mknode(content);
	nnode->next = cur;
	if (prev)
		prev->next = nnode;
	else
		list->head = nnode;
	list->len++;

	return 0; //success
}

int sll_deleteatindex(sllist* list, int index) {
	if ( (index>(list->len - 1)) || (index < 0) ) {
		return -1; // ERR index too big
	} // Don't traverse the list if we know it won't work
	
	snode *cur, *prev;
	for (cur=list->head, prev=NULL; index ; index--, prev=cur, cur=cur->next) {
		if (cur == NULL)
			return -1; //We hit the end
	}

	if (prev)
		prev->next = cur->next;
	else
		list->head = cur->next;
	list->len--;
	free(cur->field);
	free(cur);
	return 0; //success
}

void sll_printfromnode(snode* head) {
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

void sll_dfree(sllist* list) {
	snode* tmp;
	while (list->head != NULL) {
		tmp = list->head;
		if (tmp->field)
			free(tmp->field);
		list->head = tmp->next;
		free(tmp);
	}
	free(list);
}

void sll_print(sllist* list) {
	sll_printfromnode(list->head);
}

void sll_rawprint(sllist* list, int with_cr) {
	snode* mark=list->head;
	for (int i=0;i<list->len;i++) {
		printf("%s%s", mark->field, with_cr ? "\n" : "");
		mark=mark->next;
	}
}

