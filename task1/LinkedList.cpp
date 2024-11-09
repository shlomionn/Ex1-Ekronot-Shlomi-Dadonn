#include <iostream>
#include "LinkedList.h"

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
