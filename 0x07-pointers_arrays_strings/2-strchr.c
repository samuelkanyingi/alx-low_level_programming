#include <stddef.h>
/**
 * _strchr - unction that locates a character in a string
 * @s:parameter
 * @c:parameter
 * Return:charactr in a string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
