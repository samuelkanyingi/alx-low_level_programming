#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * rev_string- function to reverse string
 * @s:parameters
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int j = 0;
	int x = len - 1;

	for (j = 0 ; j < x ; j++, x--)
	{
		char tmp = s[j];

		s[j] = s[x];
		s[x] = tmp;
	}
}
