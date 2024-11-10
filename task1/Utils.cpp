#include <iostream>
#include "Utils.h"
#include "Stack.h"
#define SIZE 10

/*
* function reverses the elements in an integer array of a given size
* input: pointer to the integer array, size of the array
* output: none; the array is reversed in place
*/
void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	int i = 0;
	initStack(s);
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
	cleanStack(s);
}

/*
* function creates an array of size 10, fills it with user input, reverses it, and returns the array
* input: none (user input required for array elements)
* output: pointer to the reversed integer array of size 10
*/
int* reverse10()
{
	int i = 0;
	int* arr = new int[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		std::cout << "enter number " << i << " out of " << SIZE << std::endl;
		std::cin >> arr[i];
	}
	reverse(arr, SIZE);
	return arr;
}
