#include "main.h"
/**
 * clear_bit - funtion to set bit
 * @n: pointer parameter
 * @index:position
 * Return: 1if success or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = (1UL << index);
	*n &= m;
	return (1);
}
