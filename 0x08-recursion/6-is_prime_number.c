#include "main.h"
/**
 * is_prime_number - function that returns a prime number or return 0
 * @n:parameter
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{


	if (n <= 1)
	{
		return (0);
	}
	return (!d_prime(n, 2));
}
/**
 * d_prime - function to check for divisibility
 * @n:integer
 * @d:divivsor
 * Return: next divisor
 */
int d_prime(int n, int d)
{
	if (d * d > n)
	{
		return (0);
	}
	if (n % d == 0)
	{
		return (1);
	}
	return (d_prime(n, d + 1));
}
