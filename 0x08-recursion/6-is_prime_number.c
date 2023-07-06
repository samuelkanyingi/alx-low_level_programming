#include "main.h"
/**
 * is_prime_number - function that returns 1i is a prime number, otherwise return 0
 * @n:parameter
 */
int is_prime_number(int n)
{


	if(n <= 1)
	{
		return (0);
	}
	return prime(n, n - 1);
int prime(int n, int d)
{
	if (d * d > n)
	{
		return (1);
			
	}
	if (n % d == 0)
	{
		return (0);
	}
	return prime(n,d-1);
}
