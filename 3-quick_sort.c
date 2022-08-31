#include "sort.h"

/**
 * swap - swap numbers
 *
 * @a: element
 * @b: element
 * Return: nothing
 */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - partitio algorithm
 *
 * @high: top element
 * @low: first element
 * @array: array to be sorted
 * @realsize: original array length
 * Return: nothing
 */

int partition(int array[], int low, int high, int realsize)
{
	int rec, j = 0, pivot;

	pivot = array[high], rec = low;
	for (j = low; j < high; j++)
	{
		if (pivot > array[j])
		{
			if (rec < j)
			{
				swap_arr(&array[rec], &array[j]);
				print_array(array, realsize);
			}
			i++;
		}
	}
	if (array[rec] > pivot)
	{
		swap_arr(&array[rec], &array[high]);
		print_array(array, realsize);
	}
	return (rec);
}

/**
 * realquickSort - selection_sort algorithm
 *
 * @high: top element
 * @low: first element
 * @array: array to be sorted
 * @size: original array length
 * Return: nothing
 */

void realquickSort(int array[], int low, int high, int size)
{
	int pi, realsize = size;

	if (low < high)
	{
		pi = partition(array, low, high, realsize);
		realquickSort(array, low, pi - 1, realsize);
		realquickSort(array, pi + 1, high, realsize);
	}
}

/**
 * quick_sort - selection_sort algorithm
 *
 * @size: size of the array
 * @array: array to sort
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	realquickSort(array, 0, size - 1, size);
}
