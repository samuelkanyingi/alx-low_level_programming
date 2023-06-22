#include <stdio.h>
int evenfibo(int x)
{
	int sum = 0;
	int pr= 1;
	int c = 2;

	while (c <= x)
	{
		if  (c % 2 ==0)
		{
			sum+=c;
		}
		int t =c;
		c = pr+c;
		pr=t;
	}
	return sum;
}

int main(void)
{
	int x = 4000000;
	int result=evenfibo(x);
	printf("%d\n", result);

	return (0);
}
