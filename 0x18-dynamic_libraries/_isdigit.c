#include "main.h"
/**
 * _isdigit - function to chck if digit
 * @c: character to check
 * Return: 1 on success else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
