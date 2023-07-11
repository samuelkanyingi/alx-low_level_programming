#include "main.h"
#include "string.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string copied
 * @s2: string to copy from
 * Return: result of string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	int len1; 
	int len2;
	char *res;
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	res = (char *)malloc((len1 + len2 + 1) *sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	strcpy(res,s1);
	strcat(res,s2);

	return res;
}
