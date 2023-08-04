#include "main.h"

/**
 * flip_bits - function returns the number of bits you would need to flip
 * @n:first number
 * @m:second number
 * Return:returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int c = 0;

	while (flip != 0)
	{
		c =  c + flip & 1;
		flip >>= 1;
	}
	return (c);
}
