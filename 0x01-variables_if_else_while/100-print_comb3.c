#include <stdio.h>
/**
 * main - function
 * Return: alaways return 0
 */
int main(void)
{
	int one;
	int ten;

	for (one = 0 ; ten <= 9 ; ten++)
	{
		for (one = 0 ; one <= 9 ; one++)
		{
			if (!((one == ten) || (ten > one)))
			{
				putchar(ten + '0');
				putchar(one + '0');
				if (!(one == 9 && ten == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
