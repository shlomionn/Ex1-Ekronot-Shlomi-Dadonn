#ifndef LinkedList_H
#define LinkedList_H


/* a queue contains positive integer values. */
typedef struct List
{
	int num;
	struct List* next;
} List;

void insertToHead(List** head,List* newNode);
void removeHead(List** head);

#endif /* LinkedList_H */
