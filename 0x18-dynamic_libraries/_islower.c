#include "main.h"
/**
 * _islower - function to make small letters
 * @c: character
 * Return 1 else 0 if it fails
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
