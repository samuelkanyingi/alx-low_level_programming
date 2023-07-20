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
int index = 0;

va_list args;
va_start(args, format);
while (format[index] != '\0')
{
if (format[index] == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (format[index] == 'i')
{
i = va_arg(args, int);
printf("%d", i);
}
else if (format[index] == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (format[index] == 's')
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
index++;
}
va_end(args);
printf("\n");
}
