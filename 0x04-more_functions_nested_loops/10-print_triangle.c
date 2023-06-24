#include <unistd.h>
#include "main.h"
/**
 * print_triangle- print a triangle function
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1 ; i <= size ; i++)
	{
		int k;

		for (k = 1 ; k < size - i ; k++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
