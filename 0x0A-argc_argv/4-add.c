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
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	number = atoi(argv[i]);
	sum = sum + number;
	}
	printf("%d\n", sum);
	return (0);
}
