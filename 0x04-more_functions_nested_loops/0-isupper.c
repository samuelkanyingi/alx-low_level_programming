#include "main.h"
#include <ctype.h>

/**
 * _isupper- check for uppercase
 * @c: parameter
 * Return: result
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
