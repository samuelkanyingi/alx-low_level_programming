#include "main.h"
/**
 *  reverse_array - reverses an array
 *  @a:first character
 *  @n:last character
 */
void reverse_array(int *a, int n)
{
	int i;
	int total;

	for (i = 0 ; i < n / 2 ; i++)
	{
		total = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = total;
	}
}
