#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * puts_half - function that prints half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int x = (len + 1) / 2;
	int i;

	for (i = x ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
