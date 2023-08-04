#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number
 * @n:parameter to be printed
 * Return:void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);  /* print the bits */
	}
	putchar((n & 1) + '0');
}
