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
	int pivot = array[high];
	int i = (low - 1), j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, realsize);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, realsize);
	return (i + 1);
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