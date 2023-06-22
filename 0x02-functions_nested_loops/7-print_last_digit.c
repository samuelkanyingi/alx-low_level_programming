#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - print last digit
 *@c: parameter
 *Return: results
 */
int print_last_digit(int c)
{
	int result = c  % 10;

	printf("%d", result);
	return (result);
}
