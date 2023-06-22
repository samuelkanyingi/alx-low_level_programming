 #include "main.h"
/**
 * _isalpha- check character is an alphabet
 * @c: parameter
 * Return: always 0 (success)
 */
int _isalpha(int c)
{

	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
