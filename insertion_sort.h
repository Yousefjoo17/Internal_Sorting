#pragma once
void inserton_sort(int* array, int size)  //something not excatly such as the slides here
{
	for (int walker = 1; walker < size; walker++)
	{
		int hold = array[walker];
		for (int curr = walker - 1; curr >= 0; curr--)
		{
			if (array[curr] > hold)
			{
				array[curr + 1] = array[curr];
				array[curr] = hold;
			}
			else
			{
				array[curr+1] = hold;
				break;
			}
		}

	}
}