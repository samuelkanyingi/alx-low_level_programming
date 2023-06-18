#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * description - entry point of a program
 *
 *  Return: 0 If the program is has ended successful
 */
int main(void)
{
	int n;
	int q;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 5;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
	printf("\n");

	return (0);
}
