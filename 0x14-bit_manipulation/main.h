#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
#include <stddef.h>
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int set_me_bit(unsigned int m);
int get_endianness(void);
#endif
