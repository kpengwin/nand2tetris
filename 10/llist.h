#ifndef llist_structs
typedef struct snode {
	char* field;
	struct snode *next;
} snode;

typedef struct sllist {
	snode* head;
	snode* tail;
	int len;
} sllist;
#define llist_structs
#endif

// Create a new node with string f_content
snode* ll_mknode(char* f_content);

//sllist operations: create, append, remove
sllist* sll_create();
void sll_append(sllist* list, char* f_content) ;
void printList(snode* head) ;
void sll_print(sllist* list) ;

