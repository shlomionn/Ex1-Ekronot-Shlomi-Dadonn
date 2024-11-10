#include <iostream>
#include "LinkedList.h"

/*
* function inserts a new node to the head of the list
* input: the head of the list, the new node
* output: none
*/
void insertToHead(List** head, List* newNode)
{
	if ((*head) != NULL)
	{
		newNode->next = (*head);
		(*head) = newNode;
	}
	else
	{
		newNode->next = NULL;
		(*head) = newNode;
	}
}

void removeHead(List** head)
{
	List* toDelete = NULL;
	if (*head)
	{
		toDelete = (*head);
		(*head) = (*head)->next;
		delete toDelete;
	}
	else
	{
		std::cout << "the list is empty" << std::endl;
	}
}
