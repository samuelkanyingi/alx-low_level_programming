#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac:numbr of argumnts
 * @av:array of string that stores argumnts
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	char *res;
	int i;
	int pos = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	res = (char *)malloc((length + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(res + pos ,av[i]);
		pos += strlen(av[i]);
		res[pos++] = '\n';
	}
	res[length] = '\0';
	return (res);
}
