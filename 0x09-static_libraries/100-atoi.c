#include "main.h"
/**
 * _atoi - function to convert string to integer 
 * @s: pointer
 * Return: converted integer value
 */
int _atoi(char *s)
{
	int res  = 0;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + (*s - '0');
		}
		else if (*s == '-')
		{
				res *= -1;
		}
		else if (*s == '-')
		{
			res *= -1;
		}
		else
		{
			break;
		}
		s++;
	}
	return (res);
}
