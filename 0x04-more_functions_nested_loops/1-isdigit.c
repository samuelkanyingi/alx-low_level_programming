#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit- checks for a digit 0 to 9
 * @c: parameter
 * Return: results of digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
