#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * unsigned int binary_to_uint -  converts a binary number to unsigned int
 * @b: input pointer to a string of 0 and 1 chars
 * Return:the coverted number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int res = 0;
	int length = strlen(b);

	if (b == NULL)
	{
		return (0);
	}
	for (z = 0; z < length; z++)
	{
		if (b[z] != '0' && b[z] != '1')
		{
			return (0);
		}
		res = (res << 1) + (b[z] - '0');
	}
	return (res);
}
