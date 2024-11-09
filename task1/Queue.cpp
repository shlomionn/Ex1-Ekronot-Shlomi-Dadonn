#include <iostream>
#include "Queue.h"
void initQueue(Queue* q, unsigned int size)
{
    q->arr = new int[size];
    q->size = size;
    q->last = -1;
}
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

bool isEmpty(Queue* s)
{
    return s->last == -1;
}

bool isFull(Queue* s)
{
    return s->last == s->size - 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
