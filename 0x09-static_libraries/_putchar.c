#include "main.h"
#include <unistd.h>
/**
 * _putchar- funtion to print output
 * @c:character passed
 * Return: on success outputs character and error when -1 on return
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
