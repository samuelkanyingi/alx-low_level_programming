#include "main.h"
#include <unistd.h>
/**
 * print_diagonal- print diagonals
 * @n: parameter
 */
void print_diagonal(int n)
{
	int i,z;
	

        if (n <= 0)
        {
        	 _putchar('\n');
		 return;
        }                
	for (i = 0; i < n; i++)
	{
	
		for (z = 0; z < i; z++)
		{
			_putchar(' ');
               	}
	
		_putchar('\\');
		_putchar('\n');
	}
}
	

