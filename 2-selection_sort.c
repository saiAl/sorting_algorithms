#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - function that sorts an array of integers
 * @array: array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, small_index;

	for (i = 0; i < size; i++)
	{
		small_index = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[small_index])
				small_index = j;
		if (small_index != i)
		{
			tmp = array[small_index];
			array[small_index] = array[i];
			array[i] = tmp;
		}
		print_array(array, size);
	}
}
