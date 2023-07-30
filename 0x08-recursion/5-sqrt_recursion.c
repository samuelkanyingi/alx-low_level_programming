#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n:parameter
 * Return:the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sq_helper(n, 0));
}
/**
 * sq_helper-recurive helper func
 * @n: number to find square root
 * @z: current number to see
 * Return: n or -1
 */
int sq_helper(int n, int z)
{
	if (z * z == n)
		return (z);
	if (z * z > n)
		return (-1);
	return (sq_helper(n, z + 1));
}
