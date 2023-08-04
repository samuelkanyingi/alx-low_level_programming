#include "main.h"

/**
 * set_bit- function that sets the value of a bit to 1 at a given index
 * @index:index, starting from 0 of the bit you want to set
 * @pointer to the number we need to set
 * Return: 1 if success otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m  = 1UL << index;

	if (index >= sizeof(unsigned long int ) * 8)
	{
		return (-1);
	}
	*n = *n | m;
	return (1);
}
