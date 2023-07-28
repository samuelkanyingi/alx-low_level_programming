#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not.
 * @s:parameter
 */
int is_palindrome(char *s)
{
	
	int len;
	if (s == NULL)
	{
		return (0);
	}
	len = strlen(s);
	if (len == 0)
	{
		return (1);
	}
	return is_palindRecurse(s, 0, len -1);
}
int is_palindRecurse(const char *s, int begin, int ending)
{
	if (begin >= ending)
	{
		return (1); /* base case */
	}
	if (s[begin] != s[ending])
	{
		return (0);
	}
	return is_palindRecurse(s, begin + 1, ending -1);
}
