#include <stdio.h>
/**
 * main - entry of program
 * @argc: numbet of command-line arguements
 * @argv:string holding  command line arguements
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", argv[0]);
		return (1);
	}
	return (0);
}
