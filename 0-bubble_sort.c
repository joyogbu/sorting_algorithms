#include "sort.h"

/**
 * swap - swa' two numbers
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
 * bubble_sort - sors an array of integers in ascending order
 * using bubble sort
 * @array: an array of integers to sort
 * @size: size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			print_array(array, size);
			}
		}
	}
}
