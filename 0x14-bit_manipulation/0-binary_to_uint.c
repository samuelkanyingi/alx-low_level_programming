#include "main.h"

/**
 * binary_to_uint - function to covert binary to int
 * @b:pointer to a string
 * Return: results if success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = res * 2 + (*b - '0');
		b++;
	}
	if (b == NULL)
	{
		return (0);
	}
	return (res);
}
