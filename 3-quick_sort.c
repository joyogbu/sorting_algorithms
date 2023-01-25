#include "sort.h"

/**
 * swap - swap two numbers
 * @x: first integer
 * @y: second integer
 * Return: nothing
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * partition - partition an array
 * @array: array to partition
 * @low: start
 * @high: end
 * @size: size of the array
 * Return: int value
 */
int partition(int *array, int low, int high, size_t size)
{
	int j = low;
	int pivot = array[high];
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort2 - sorts partitions of array recursively
 * @array: array to sort
 * @low: initialiazed integer
 * @high: last element of the array
 * @size: size of the array
 * Return: nothing
 */

void quick_sort2(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quick_sort2(array, low, p - 1, size);
		quick_sort2(array, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using quick sort
 * @array: array to sort
 * @size: size of ths array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	quick_sort2(array, 0, size - 1, size);
}
