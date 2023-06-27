#include "main.h"
#include <stdio.h>
/**
 * print_array -  function that prints n elements of an array of integers
 * @a: parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int x;

	if (n <= 0)
		return;
	printf("%d", a[0]);
	for (x = 0; x < n; x++)
	{
		printf(", %d", a[x]);
	}
	printf("\n");
}
