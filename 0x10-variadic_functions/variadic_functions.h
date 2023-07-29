#ifndef SUM_H
#define SUM_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_int(va_list arg);
void p_char(va_list arg);
void p_float(va_list arg);
void p_string(va_list arg);
#endif
