#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that check if a string is a palindrome.
 * @s:parameter
 * Return: recursing call
 */
int is_palindrome(char *s)
{
	int ln;

	if (s == NULL)
	{
		return (0);
	}
	ln = strlen(s);
	if (ln == 0)
	{
		return (1);
	}
	return (is_palindRecurse(s, 0, ln - 1));
}
/**
 * is_palindRecurse - recursive function to see palindrome
 * @s:array
 * @begin:integer
 * @ending:integer
 * Return: recursive call to check palindrome string
 */
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
	return (is_palindRecurse(s, begin + 1, ending - 1));
}
