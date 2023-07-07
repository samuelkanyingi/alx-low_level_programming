#include <stdio.h>
/**
 * main - entry of program
 * @argc: number of arguements
 * @args: string pointer
 * Return: alaways 0
 */
int main(int argc, char *args[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", args[i]);
	}
	return (0);
}
