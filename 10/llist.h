#ifndef llist_h
typedef struct snode {
	char* field;
	struct snode *next;
} snode;

typedef struct sllist {
	snode* head;
	snode* tail;
	int len;
} sllist;
// Create a new node with string f_content
snode* ll_mknode(char* f_content) ;

//sllist operations: create, append, remove
sllist* sll_create() ;
void sll_append(sllist* list, char* f_content) ;
void sll_printfromnode(snode* head) ;
void sll_print(sllist* list) ;
void sll_dfree(sllist* list) ;
void sll_rawprint(sllist* list, int with_cr) ;

#define llist_h
#endif


