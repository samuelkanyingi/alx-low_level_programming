#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return:the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int s;
	int i;

	if (min > max)
		return (NULL);
	s = max  - min + 1;
	array = (int *)malloc(s * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
