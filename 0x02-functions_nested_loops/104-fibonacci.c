#include <stdio.h>
void fibo (int n)
{
	long long fib[n];
	fib[0]=1;
	fib[1]=2;
	printf("%lld,%lld",fib[0],fib[1]);

	for (int i = 2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		printf(",%lld",fib[i]);
	}
	printf("\n");
}
int main (void)
{
	int n=98;
	fibo(n);

	return (0);
}
