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
	int product;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
