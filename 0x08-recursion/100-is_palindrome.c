#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not.
 * @s:parameter
 */
int is_palindrome(char *s)
{
	int x = strlen(s);

	if (x <= 1)
	{
		return (1);
	}
	return palindrome(s,0,x-1);
}
int palindrome(char *s, int stat, int end);
int palindrome(char *s, int stat, int end)
{
	if (stat >= end)
	{
		return (1);
	}
	if (s[stat] != s[end])
	{
		return (0);
	}
	return palindrome(s, stat + 1,end - 1);
}

