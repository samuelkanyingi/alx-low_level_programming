#include <stdio.h>
#include <stdlib.h>

/**
 * p_codes- prints the opcodes of its own main function.
 * @n_bytes: number of bytes
 */
void p_codes(int n_bytes)
{
	unsigned char *ptr = (unsigned char *)p_codes;

	int j;

	for (j = 0; j <  n_bytes; j++)
	{
		printf("%02x ", ptr[j]);
	}
	printf("\n");
}
/**
 * main- main of function
 * @argc: number of arguments
 * @argv:arguments
 * Return: 0,success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	int n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p_codes(n_bytes);
	return (0);
}
