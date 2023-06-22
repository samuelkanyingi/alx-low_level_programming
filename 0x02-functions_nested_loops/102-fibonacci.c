#include <stdio.h>
void fibonacci(int n)
{
	int fibo[n];
	fibo[0]=1;
	fibo[1]=2;
	printf("%d, %d", fibo[0],fibo[1]);
	for (int i=2;i<n;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
		printf(", %d",fibo[i]);
	}
	printf("\n");
}
int main(void)
{
	int n =50;
	fibonacci(n);

	return (0);
}
