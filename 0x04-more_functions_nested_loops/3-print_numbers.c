#include "main.h"
#include <unistd.h>
/**
 * print_numbers- print numbers 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar (i + '0');
	}
	_putchar('\n');
}
