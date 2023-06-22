#include <stdio.h>
/**
 *main- start of program
 *Return: always 0
 */
int multiples(int n);

int main (void)
{
	int n = 1024;
	int result=multiples(n);
	printf("%d\n",result);
	
	return (0);
}
/**
 * multiples- function name
 * @n: parameter
 * Return: sum
 */
int multiples(int n)
{
	int sum = 0;
	for (int i=0;i<n;i++)
	{
		if (i%3==0 || i%5==0)
		{
			sum+=i;
		}
	}
	return sum;
}


