#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *A program that assigns a random number
 *main - this is the main function
 *description - the starting point of program
 *return : 0 (success)
 *description - this shows we have successfully ended the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	return (0);
}
