#include<iostream>
#include"Selection_sort.h"
#include"Heap_sort.h"
#include"insertion_sort.h"
#include"shell_sort.h"
#include"Bubble_sort.h"
#include"Quick_sort.h"
using namespace std;

int main()
{
	int a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = rand() % 101;
	}
	//selection_sort(Array, 10);
	//heap_sort(Array, 10);
	//inserton_sort(Array, 10);
	//shell_sort(Array, 10);
	//Bubble_sort(a, 50);
	//Quick_sort(a, 0, 99);
	for (int i = 0; i < 100; i++)
		cout << a[i]<<" ";
	
}