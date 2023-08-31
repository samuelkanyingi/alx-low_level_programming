#include "main.h"
/**
 * get_bit - function to get numbrr of bits
 * @n:parametrr
 * @index: position
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (1);
	}
	m  = 1UL << index;

	if ((n & m) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
