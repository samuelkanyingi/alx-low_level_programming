#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev- print a string in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	int i = 0;
	int len;

	if (s == NULL)
	{
		printf("invalid string\n");
		return;
	}

	len = strlen(s); /*check length of string*/

	while (s[len] != '\0') /* check length of string by iterating until '\0' */
	{
		len++;
	}
	for (i = len - 1 ; i >= 0; i--) /* iterates characters in reverse order*/
	{
		_putchar(s[i]);
	}
	putchar('\n');
}

