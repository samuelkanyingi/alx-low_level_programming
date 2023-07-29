#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all- function that prints anything.
 * @format:type
 * ...:variable types
 */
void print_all(const char * const format, ...)
{
char c;
int i;
float f;
char *s;
int index_n = 0;

va_list args;
va_start(args, format);
while (format[index_n] != '\0')
{
if (format[index_n] == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (format[index_n] == 'i')
{
i = va_arg(args, int);
printf("%d", i);
}
else if (format[index_n] == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (format[index_n] == 's')
{
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
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
