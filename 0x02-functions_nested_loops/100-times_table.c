#include <stdio.h>
#include "main.h"
/**
 *print_times_table- print n times
 *@n:parameters
 */
void print_times_table(int n)
{
	if (n > 15  ||  n < 0)
	{
		return;
	}
	for (int i = 0; i <=10;i++)
	{
		printf("%d x %d = %d\n", :i,n,(i*n));
	}
}
