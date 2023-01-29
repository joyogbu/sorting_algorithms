#include "sort.h"
#include <stddef.h>

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
 * shell_sort - sorts an array of integers using shell sort
 * @array: array to sort
 * @size: size of the array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 1;
	size_t i, j;
	/*for (h = 1; h < size / 3;)*/
	while (h < size / 3)
	{
		h = 3 * h + 1;
	}
	while (h >= 1)
	{
		for (i = h; i < size; i++)
		{
			for (j = i; j >= h; j -= h)
			{
				if (array[j] < array[j - h])
				{
					swap(&array[j], &array[j - h]);
					/*print_array(array, size);*/
				}
			}
		}
		h /= 3;
		print_array(array, size);
	}
}
