#include <stdio.h>
/**
 * positive_or_negative- check if a number is positive_or_negative
 * @n: parameter
 * Return: 0
 */
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
