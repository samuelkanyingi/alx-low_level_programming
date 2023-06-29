#include <ctype.h>
#include "main.h"
/**
 * string_toupper - converts lowercase letters of a string to uppercase.
 * @*:all string
 * @str: parameter
 * Return: uppercase letters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
