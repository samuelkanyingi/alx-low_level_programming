#include <stdio.h>
/**
 * main - function main
 * Return:Always 0 (successful)
 */

int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10 ; digit++)
	{
		putchar (digit + '0');
	}
	putchar ('\n');
	return (0);
}
