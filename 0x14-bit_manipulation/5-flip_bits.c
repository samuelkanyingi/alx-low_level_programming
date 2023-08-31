#include "main.h"
/**
 * flip_bits - function to flip bits
 * @n:first number
 * @m:second number
 * Return:number of set bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;

	return (set_me_bit(x));
}

/**
 * set_me_bit - function to set bit
 * @m: parameter
 * Return: number of bit set
 */

unsigned int set_me_bit(unsigned int m)
{
	unsigned int cnt;

	cnt = 0;

	while (m)
	{
	       cnt += m & 1;
	       m >>= 1;
	}
	return (cnt);
}
