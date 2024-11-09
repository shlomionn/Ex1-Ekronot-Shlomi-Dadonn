#include <iostream>
#include "Utils.h"
#include "Stack.h"
#define SIZE 10
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
int* reverse10()
{
	int i = 0;
	int* arr = new int[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		std::cout << "enter number " << i << "out of" << SIZE << std::endl;
		std::cin >> arr[i];
	}
	reverse(arr, SIZE);
	return arr;
}