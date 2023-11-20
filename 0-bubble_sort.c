#include "sort.h"
/**
 *bubble_sort - a function that sorts an array...
 *@array: int ptr.
 *@size: size of array.
 */

void bubble_sort(int *array, size_t size)
{
	int t;
	size_t i, j;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
				print_array(array, size);
			}
		}
		i++;
	}
}
