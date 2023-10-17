#include "main.h"
/**
 * _isupper - function to convert to uppercase
 * @c: number to convert
 * Return: 1 on success or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
