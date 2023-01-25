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

int partition(int *array, int low, int high)
{
	int j;
	int pivot = array[high];
	int i = low;

	for (j = low; j < high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using quik sort algorithm
 * @array: array to sort
 * @size: size of thw arrat
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;
	int p;
	if (low < high)
	{
		p = partition(array, low, high);
		high = p - 1;
		quick_sort(array, size);
		low = p + 1;
		quick_sort(array, size);
	}
}
	
