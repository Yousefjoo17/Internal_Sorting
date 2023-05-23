#pragma once
void selection_sort(int* array, int size)
{
	int min_ind,temp;
	for (int i = 0; i < size; i++)
	{
		min_ind =i;
		for (int j = i; j < size; j++)
		{
			if (array[j] < array[min_ind])
				min_ind = j;
		}
		temp = array[i];
		array[i] = array[min_ind];
		array[min_ind] = temp;
	}
}