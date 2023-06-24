#include <stdio.h>
/**
 * main- entry point of program
 * Return: always 0
 */
long prime(long mostPrime);
int main(void)
{
	long number = 612852475143;
	long largestPrime = prime(number);
	return (0);
}
/**
 * prime- find the prime number
 * @mostPrime: parameter
 * Return: the mostPrime
 */
long prime(long mostPrime)
{
	long greatest = -1;
	long fact;
	while (mostPrime % 2 == 0)
	{
		greatest = 2;
		mostPrime /= 2;
	}

	for (fact = 3; fact * fact <= mostPrime ; fact = fact + 2)
	{
		for (; mostPrime % fact == 0 ; mostPrime /= fact)
		{
			greatest = fact;
		}
	}
	if (mostPrime > 2)
	{
		greatest = mostPrime;
	}
	return (mostPrime);
}
