#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *A program that assigns a random number
 *main - this is the main function
 *description - the starting point of program
 *Return: 0 (success)
 *description - this shows we have successfully ended the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
