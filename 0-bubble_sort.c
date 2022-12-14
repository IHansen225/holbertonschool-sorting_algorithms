#include "sort.h"

/**
 * bubble_sort - bubble_sorting algorithm
 *
 * @size: size of the array
 * @array: array to sort
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, j = 0;

	if ((size < 2) || (!array))
	{}
	else
	{
		for (; j < size; j++)
		{
			for (; i < size; i++)
			{
				if ((array[i] > array[i + 1]) && (i + 1 < size))
				{
					temp = array[i + 1];
					array[i + 1] = array[i];
					array[i] = temp;
					print_array(array, size);
				}
			}
			i = 0;
		}
	}
}
