#include "sort.h"
/**
 *selection_sort- function sortingg
 *@array: sorted
 *@size: array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t ount, jets, k;
	int temp;

	if (!array || !size)
		return;
	for (ount = 0; ount < size - 1; ount++)
	{
		for (jets = size - 1, k = ount + 1; jets > ount; jets--)
		{
			if (array[jets] < array[k])
			{
				k = jets;
			}
		}
		if (array[ount] > array[k])
		{
			temp = array[ount];
			array[ount] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
