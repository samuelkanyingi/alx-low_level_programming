#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry of program
 * @argc:number of arguements
 * @argv:array of arguements
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int number;
	int sum = 0;
	int k;
	int l;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (k = 1; k < argc; k++)
	{
	for (l = 0; argv[k][l] != '\0'; l++)
	{
	if (!isdigit(argv[k][l]))
	{
	printf("Error\n");
	return (1);
	}
	}
	number = atoi(argv[k]);
	sum = sum + number;
	}
	printf("%d\n", sum);
	return (0);
}
