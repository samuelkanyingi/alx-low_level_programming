#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * puts2- function to print every other character of a string
 * @str: parameter
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (!(i % 2 == 0))
		{
			continue;
		}
		_putchar(i[str]);
	}
	_putchar('\n');
}
