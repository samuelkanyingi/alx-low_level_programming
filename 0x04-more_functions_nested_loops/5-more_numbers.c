#include "main.h"
#include <unistd.h>
/**
 * more_numbers- print 10 times
 */
void more_numbers(void)
{
	int j;

	for (j = 0; j <= 10; j++)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
