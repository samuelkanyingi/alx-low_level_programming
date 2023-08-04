#include "main.h"
#include <stdio.h>
/**
 * _puts - function
 * @s:parameter
 * Return: character
 */
void _puts(char *s)
{
	while(*s!= '\0')
	{
		putchar(*s);
		s++;
	}
}
