#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

/*
* function pushes a new element onto the stack
* input: pointer to the stack, element to push onto the stack
* output: none
*/
void push(Stack* s, unsigned int element)
{
	List* newNode = new List;
	newNode->num = element;
	insertToHead(&(s->head), newNode);
}

/*
* function pops the top element from the stack
* input: pointer to the stack
* output: the popped element, or -1 if the stack is empty
*/
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

/*
* function initializes the stack
* input: pointer to the stack
* output: none
*/
void initStack(Stack* s)
{
	s->head = NULL;
}

/*
* function cleans the stack by removing all elements
* input: pointer to the stack
* output: none
*/
void cleanStack(Stack* s)
{
	while (s->head)
	{
		pop(s);
	}
}

/*
* function checks if the stack is empty
* input: pointer to the stack
* output: true if the stack is empty, false otherwise
*/
bool isEmpty(Stack* s)
{
	if (s->head)
	{
		return false;
	}
	return true;
}

/*
* function checks if the stack is full
* input: pointer to the stack
* output: false (stack is never full as it has no size limit)
*/
bool isFull(Stack* s)
{
	return false; //there is no limit to size so it's never full
}
