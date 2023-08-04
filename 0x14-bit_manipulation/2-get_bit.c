#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index -index, starting from 0 of the bit you want to get
 * @n:number to be retrieved
 * Return: the value of the bit at index otherwise 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = 1UL << index;
	
	if (n & m)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
