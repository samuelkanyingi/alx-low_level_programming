#include <unistd.h>
#include "main.h"
/**
 * print_line- print a line n times
 * @n: parameter
 */

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		if (n > 0)
		{
			_putchar('_');
			if (n < 0)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
