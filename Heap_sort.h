#pragma once
#include<iostream>
using namespace std;
void max_heapify(int*array,int size,int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < size && array[left] > array[largest])
		largest = left;
	if (right < size && array[right] > array[largest])
		largest = right;
	if (largest != i)
	{
		swap(array[largest], array[i]);
		max_heapify(array, size, largest);
	}
}

void heap_sort(int*array,int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		max_heapify(array, size, i);
	for (int i = size - 1; i >= 0; i--)
	{
		swap(array[i], array[0]);
		max_heapify(array, i, 0);
	}
}