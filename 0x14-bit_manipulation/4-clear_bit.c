#include "main.h"
/**
 * clear_bit-ets the value of a bit to 0 at a given index
 * @n:pointer to an unsigned long integer
 * @index: index of the bit
 * Return: 1 if success otherwise 0 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1UL << index;

	if ((*n & m) == 0)
		return (1);
	*n &= ~m;
	return (1); /*successful clearing of bits */
}
