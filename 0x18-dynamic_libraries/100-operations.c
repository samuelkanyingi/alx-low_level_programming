#include <stdlib.h>
#include "main.h"
/**
 * add- function to add
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function to subtract
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function to multiply
 * @a: first integer
 * @b: second integer
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * _div - function to divide
 * @a: first integer
 * @b: second integer
 * Return: division
 */
int _div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}
/**
 * mod - function to find remainder
 * @a: first integer
 * @b: second integer
 * Return: modulus
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
