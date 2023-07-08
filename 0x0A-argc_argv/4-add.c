#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of program
 * @argc:number of arguements
 * @argv:array of arguements
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int sum;

	if (argc < 1)
	{
		printf("0\n");
	}
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;
	printf("%d\n", sum);
	return (0);
}
