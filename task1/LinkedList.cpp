#include <iostream>
#include "LinkedList.h"

void insertToHead(List** head, List* newNode)
{
	if (*head)
	{
		newNode->next = (*head);
		(*head) = newNode;
	}
	else
	{
		(*head) = newNode;
	}
}
void removeHead(List** head)
{
	List* newHead = NULL;
	List* toDelete = NULL;
	if (*head)
	{
		toDelete = (*head);
		newHead = (*head)->next;
		delete toDelete;
	}
	else
	{
		std::cout << "the list is empty" << std::endl;
	}
}
