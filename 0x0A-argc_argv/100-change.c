#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry of program
 * @argc:number of command lin arguments
 * @argv:array of string having command line arguments
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int total_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	total_coins = coin(cents);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", total_coins);
	return (0);
}
/**
 * coin - function to calculat minimum number of coins
 * @cents:amount of coins
 * Return: minimum number of coins
 */
int coin(int cents)
{
	int num_coins = 0;

	num_coins += cents / 25;
	cents %= 25;
	num_coins += cents / 10;
	cents %= 10;
	num_coins += cents / 5;
	cents %= 5;
	num_coins += cents / 2;
	cents %= 2;
	num_coins += cents;
	return (num_coins);
}
