#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
void push(Stack* s, unsigned int element)
{
	List* newNode = new List;
	newNode->num = element;
	insertToHead(&(s->head), newNode);
}
int pop(Stack* s) // Return -1 if stack is empty
{
	int temp = 0;
	if (s->head)
	{
		temp = s->head->num;
		removeHead(&(s->head));
		return temp;
	}
	return -1;
}

void initStack(Stack* s)
{
	s->head = new List;
}
void cleanStack(Stack* s)
{
	while (s->head)
	{
		pop(s);
	}
	delete s;
}

bool isEmpty(Stack* s)
{
	if (s->head)
	{
		return false;
	}
	return true;
}
bool isFull(Stack* s)
{
	return false; //there is no limit to size so it's never full
}