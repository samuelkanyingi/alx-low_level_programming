#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything based on the format.
 * @format: The format string containing types ('c', 'i', 'f', 's').
 * ...: The variable arguments based on the format.
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
            char c = va_arg(args, int);
            printf("%c", c);
        }
        else if (format[index_n] == 'i')
        {
            int i = va_arg(args, int);
            printf("%d", i);
        }
        else if (format[index_n] == 'f')
        {
            double f = va_arg(args, double);
            printf("%f", f);
        }
        else if (format[index_n] == 's')
        {
            char *s = va_arg(args, char*);
            if (s == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", s);
            }
        }

        if (format[index_n + 1] != '\0' && (format[index_n + 1] == 'c' || format[index_n + 1] == 'i' || format[index_n + 1] == 'f' || format[index_n + 1] == 's'))
        {
            printf(", ");
        }

        index_n++;
    }

    va_end(args);
    printf("\n");
}

