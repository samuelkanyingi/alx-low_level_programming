#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry of program
 * @argc:number of arguments
 * @argv: argument vector
 * Return: 0, if success
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int res;

	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	fp = get_op_func(argv[2]);
	if (fp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = fp(n1, n2);
	printf("%d\n", res);
	return (0);
}
