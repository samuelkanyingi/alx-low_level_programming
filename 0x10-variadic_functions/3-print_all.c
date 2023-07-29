#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * p_char-prints character
 * @arg:argument tpe of char
 */
void p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * p_int-prints an int
 * @arg:argument of type int
 */
void p_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}
/**
 * p_float-prints a float
 * @arg:argument type float
 */
void p_float(va_list arg)
{
	double f;

f = va_arg(arg, double);
	printf("%f", f);
}
/**
 * p_string-prints a string
 * @arg:argument typ is string
 */
void p_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char*);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}
/**
 * print_all- function that prints anything.
 * @format:type
 * ...:variable types
 */
void print_all(const char * const format, ...)
{
int index_n = 0;
va_list args;
va_start(args, format);

while (format[index_n] != '\0')
{
if (format[index_n] == 'c')
{
p_char(args);
}
else if (format[index_n] == 'i')
{
p_int(args);
}
else if (format[index_n] == 'f')
{
p_float(args);
}
else if (format[index_n] == 's')
{
p_string(args);
}

if (format[index_n + 1] != '\0' &&
(format[index_n + 1] != 'i' || format[index_n + 1] == 'c'
|| format[index_n + 1] == 'f' || format[index_n + 1] == 's'))
{
printf(", ");
}
index_n++;
}
va_end(args);
printf("\n");
}
