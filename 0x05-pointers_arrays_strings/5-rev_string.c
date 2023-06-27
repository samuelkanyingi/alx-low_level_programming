#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * rev_string- function to reverse string
 * @n:parameters
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int j;
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for ( j = len - 1 ;j >= 0; j--)
	{
		putchar(s[j]);
	}
}
