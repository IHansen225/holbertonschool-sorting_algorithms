#include "sort.h"

/**
 * selection_sort - selection_sort algorithm
 * 
 * @size: size of the array
 * @array: array to sort
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, pos;
	int temp, min;

	for (i = 0; i < size; i++)
	{
		pos = i, min = __INT_MAX__;
		for (j = i; j < size; j++)
		{
			if (min > array[j])
				min = array[j], pos = j;
		}	
		if (array[pos] == array[i])
		{
			min = pos = 0;
			continue;
		}
		temp = array[pos];
		array[pos] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
