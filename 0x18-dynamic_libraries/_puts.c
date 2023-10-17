#include "main.h"
#include <stddef.h>
/**
 * _puts -  function to print a string
 * @s: string
 */
void _puts(char *s)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		_putchar('\n');
	}
}
