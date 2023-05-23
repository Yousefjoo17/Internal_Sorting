#pragma once
#include<iostream>
using namespace std;  // something wrong here 
void median_left(int* arr, int left, int right)
{
	int mid = (left + right) / 2;

	if (arr[left] > arr[mid])
		swap(arr[left], arr[mid]);
	if (arr[left] > arr[right])
		swap(arr[left], arr[right]);
	if (arr[mid] > arr[right])
		swap(arr[mid], arr[right]);

	swap(arr[left], arr[mid]);
}





void Quick_sort(int* arr, int left, int right)
{
	if (left >= right)
		return;

	//median_left(arr, left, right);

	int sortleft, sortright, pivot;
		pivot = arr[left];
		sortleft = left + 1;
		sortright = right;
	
	while (sortleft < sortright)
	{
		while (arr[sortleft] < pivot)
			if(right>sortleft)
				sortleft++;
			else {
				sortleft++;
				break;
			}
			
		while (arr[sortright] >= pivot)
			if(left<sortright)
				sortright--;
			else
			{
				sortright--;
				break;
			}
			
		if (sortleft < sortright)
		{
			swap(arr[sortleft], arr[sortright]);
			sortleft++;
			sortright--;
		}
	}
	swap(arr[left], arr[sortleft-1]);
	
		Quick_sort(arr, left, sortright-1);
		Quick_sort(arr, sortleft, right);
}



