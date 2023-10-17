#include "main.h"
/**
 * is_alpha - function to check if a character is alphabetic
 * @c: character to check 
 * Return 1 on success else 0
 */
int _isalpha(int c)
{
	if ((c >='A' &&  c <='Z') || (c >='a' &&  c <='z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
