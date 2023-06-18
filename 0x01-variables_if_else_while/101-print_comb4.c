#include <stdio.h>
/**
 * main : function main
 * description: works on main function
 * Return: Always 0 success
 */

int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = 0 ; hundred <= 9 ; hundred++)
	{
		for (ten = hundred + 1; ten <= 9 ; ten++)
		{
			for (one = ten + 1 ; one <= 9 ; one++)
			{
				if (!((one == ten) || (ten == hundred) || (ten > one) || (hundred > ten)))
				{
					putchar(hundred + '0');
					putchar(ten + '0');
					putchar(one + '0');
					if (!(one == 9 && ten == 8 && hundred == 7))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
