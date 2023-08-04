#include "main.h"
/**
 * _abs - function that returns absolute value of an integer
 * @n: integer
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if(n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
