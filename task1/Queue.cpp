#include <iostream>
#include "Queue.h"

/*
* function initializes the queue with a specified size
* input: pointer to the queue, size of the queue
* output: none
*/
void initQueue(Queue* q, unsigned int size)
{
    q->arr = new int[size];
    q->size = size;
    q->last = -1;
}

/*
* function frees the memory allocated to the queue and cleans it
* input: pointer to the queue
* output: none; prints a message indicating the queue is cleaned
*/
void cleanQueue(Queue* q)
{
    delete[] q->arr;
    q->arr = NULL;
    std::cout << "queue cleaned" << std::endl;
}

void enqueue(Queue* q, unsigned int newValue)
{
    int i = 0;
    if (isFull(q))
    {
        std::cout << "queue full" << std::endl;
    }
    else
    {
        q->arr[q->last + 1] = newValue;
        q->last++;
    }
}

int dequeue(Queue* q)
{
    int i = 0, temp = 0;
    if (isEmpty(q))
    {
        std::cout << "queue is empty" << std::endl;
        return -1;
    }
    temp = q->arr[0];
    for (i = 0; i < q->last; i++)
    {
        q->arr[i] = q->arr[i + 1];
    }
    q->arr[q->last] = NULL;
    q->last--;
    return temp;
}

/*
* function checks if the queue is empty
* input: pointer to the queue
* output: true if the queue is empty, false otherwise
*/
bool isEmpty(Queue* s)
{
    return s->last == -1;
}

/*
* function checks if the queue is full
* input: pointer to the queue
* output: true if the queue is full, false otherwise
*/
bool isFull(Queue* s)
{
    return s->last == s->size - 1;
}
