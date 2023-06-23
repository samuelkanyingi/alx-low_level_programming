#include <stdio.h>
/**
 * main- entry of a program
 * Return: always 0
 */
void fizz(void);
int main(void)
{
	fizz();
	return (0);
}
/**
 * fizz- fizzbuzz function
 */
void fizz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
