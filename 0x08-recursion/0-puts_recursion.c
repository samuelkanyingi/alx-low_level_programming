#include <unistd.h>
#include <stdio.h>
/**
 * _puts_recursion - function that prints a string
 * @s:parameter
 * Return: s
 */
void _puts_recursion(char *s);
void _puts_recursion(char *s)
{
	puts(s);
	return ;
}
