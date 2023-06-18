#include <stdio.h>

/**
 * main - function name
 * Return: Always return 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar (alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	{
		putchar (alphabet);
	}
	putchar (0);
	return (0);
}
