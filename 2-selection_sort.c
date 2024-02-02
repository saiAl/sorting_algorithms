#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * @array: array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int small, tmp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		small = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (small > array[j])
			{
				small = array[j];
				tmp = array[i];
				array[i] = small;
				array[j] = tmp;
			}
		}
		print_array(array, size);
	}
}
