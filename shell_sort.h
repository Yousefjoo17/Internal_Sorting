#pragma once

void shell_sort(int*arr,int size)  // need revision
{
	for (int gap = size / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < size ; i++)  // became insertion sort problem now
		{
			int hold = arr[i];
			int j;
			for (j = i; j >= gap; j -= gap)
			{
				if (arr[j - gap] > hold)
					arr[j] = arr[j - gap];
				else
				{
					break;
				}
			}
			arr[j] = hold;

		}
	}
}