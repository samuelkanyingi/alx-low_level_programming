#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search -  function that searches for a value using the Binary
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start;
	int end;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		int i;
		int mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
