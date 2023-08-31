#include "main.h"

/**
 * set_bit - function to set a bit
 * @n: pointer
 * @index: position
 * Return: 1 if success or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	m = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= m;
	return (1);
}

