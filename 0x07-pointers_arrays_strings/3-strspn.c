#include <stddef.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s:parameter
 * @accept:parameter
 * Return:the number of bytes in the initial segment from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int m = 1;
	char *a;

	while (*s != '\0' && m)
	{
		m = 0;
		for (a = accept ; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				l++;
				m = 1;
				break;
			}
		}
		if (m)
			s++;
	}
	return (l);
}
