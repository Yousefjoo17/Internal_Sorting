#pragma once
#include<iostream>
using namespace std;
void Bubble_sort(int* arr, int size)
{
	int curr = 0;
	bool sorted = false;
	while (curr < size && !sorted)
	{
		int walker = size - 1;
		sorted = true;
		while (walker > curr)  // bring the minimum to the first
		{
			if (arr[walker] < arr[walker - 1])
			{
				sorted = false;
				swap(arr[walker], arr[walker - 1]);
			}
			walker--;
		}
		curr++;
	}
}




/**************using recursion*******************/
/*void Bubble_sort(int* arr, int size)   
{
	if (size == 0)
		return;
	for (int i = 0; i < size - 1; i++)
		if (arr[i] > arr[i + 1])
			swap(arr[i], arr[i + 1]);
	
	Bubble_sort(arr, size - 1);
}*/
