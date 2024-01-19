#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j;
	int temp, swap;

	while (swap != 0)
	{
		swap = 0;

		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;

				/* Print after swap */
				print_array(array, size);
			}
		}
	}
}
