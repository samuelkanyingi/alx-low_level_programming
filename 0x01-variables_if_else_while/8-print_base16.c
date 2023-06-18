#include <stdio.h>
/**
 * main - function main
 * Return: Always 0
 */
int main(void)
{
	int i;
	char alphabet;

	for (i = '0' ; i <= '9'; i++)
	{
		putchar (i);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}
