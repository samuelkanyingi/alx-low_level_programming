#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1:string  to be concatenated
 * @s2:string to be concatenated from
 * @n: integer
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	size_t st1;
	size_t  st2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	st1 = strlen(s1);
	st2 = strlen(s2);

	if (n >= st2)
		n = st2;
	res = (char *)malloc((st1 + n + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);
	strcpy(res, s1);
	strncat(res, s2, n);
	return (res);
}
