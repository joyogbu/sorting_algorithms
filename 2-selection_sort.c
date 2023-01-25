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
 * selection_sort - sorts an array of data in ascending order
 * using selection sort
 * @array: array to sort
 * @size: size of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, m;

	for (i = 0; i < size - 1; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[m])
			{
				m = j;
			}
		}
		if (m != i)
		{
			swap(&array[i], &array[m]);
		}
		print_array(array, size);
	}
}
