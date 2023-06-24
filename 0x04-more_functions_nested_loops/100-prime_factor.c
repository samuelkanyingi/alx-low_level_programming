#include <stdio.h>
/**
 * prime- find the prime number
 * @mostPrime: parameter
 * Return: the mostPrime
 */
int main(void)
{       
        prime(612852475143);
}               
long long prime(long long mostPrime)
{       
        long long greatest = -1;
        while (mostPrime % 2 == 0)
        {       
                greatest = 2;
                mostPrime /= 2;
        }
	long long fact, greatest;
        for (fact = 3; fact*fact <= mostPrime;fact=fact+2)
        {
                for (;mostPrime % fact == 0;number /= fact)
                {       
                        mostPrime=fact;
                }       
        }
	if (mostPrime > 2)i
	{
		greatest = mostPrime;
	}
	return mostPrime;
 }
