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
		return (sqrt(n));
}
