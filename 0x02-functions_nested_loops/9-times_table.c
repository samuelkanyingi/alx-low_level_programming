#include <stdio.h>
#include "main.h"
/**
 * times_table- function for times-table
 * Return: time-table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			printf("%4d", i * k);
		}
		printf("\n");
	}
}
