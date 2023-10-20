#include "main.h"
/**
 * _strspn - function to detrrmine length of intial string segment
 * @s: intial string segment
 * @accept:  characters contained in another string
 * Return: length of the matched segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;
	int i;
	int fnd = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				cnt++;
				fnd = 1;
				break;
			}
		}
		if (fnd == 0)
		{
			return (cnt);
		}
		s++;
	}
	return (cnt++);
}
