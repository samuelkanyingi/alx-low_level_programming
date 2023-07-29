#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main- entry of program
 * @argc:argument count
 * @argv:argument vector
 * Return: 0,success
 */
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int i;
	char res[2000];

	if (argc != 3)
	{
		printf("%s\n", argv[0]);
		return (1);
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("error is not a valid one");
			return (1);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("error");
			return (98);
		}
	}
	multi(num1, num2, res);
	p_res(res);
	return (0);
}
/**
 * p_res - print result
 * @res: string
 */
void p_res(char *res)
{
	int z;

	z = 0;

	while (res[z] == '0')
		z++;
	if (res[z] == '\0')
		printf("0\n");
	else
	{
		printf("%s\n", &res[z]);
	}
}
/**
 * multi- poerform multiplication
 * @num1:integer
 * @num2:integer
 * @res:string
 */
void multi(char *num1, char *num2, char *res)
{
	int ln;
	int ln2;
	int i;
	int c;
	int j;
	int prod;

	ln = 0;
	ln2 = 0;

	ln = strlen(num1);
	ln2 = strlen(num2);
	for (i = 0; i < ln + ln2; i++)
		res[i] = '0';
	res[ln + ln2] = '\0';

	for (i = ln - 1; i >= 0; i--)
	{
		c = 0;
		for (j = ln2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0') + (res[i + j + 1] - '0') + c;
			c = prod / 10;
			res[i + j + 1] = prod % 10 + '0';
		}
	res[i] += c;
	}
}
