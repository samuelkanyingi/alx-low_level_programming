#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func- selects the correct function to perform the operation
 * @s:operator
 * Return: on the corresponing operator return pointer to func
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int j = 0;

	while (ops[j].op != NULL)
	{
		if (*s == *(ops[j].op) && *(s + 1) == '\0')
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
