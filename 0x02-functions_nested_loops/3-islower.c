#include "main.h"
#include <ctype.h>
/**
 * _islower- function main
 * @c:parameter
 * Return: always 0
 */
int _islower(int c)
{
	if  (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
