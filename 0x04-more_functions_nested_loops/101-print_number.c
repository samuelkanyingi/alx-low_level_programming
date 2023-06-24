#include <unistd.h>
#include "main.h"
/**
 * print_number- print numbers function
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}
	if (temp / 10 != 0)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + '0');
}
