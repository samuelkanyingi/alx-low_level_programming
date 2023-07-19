#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: parameter
 * @f:pointer to string
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
