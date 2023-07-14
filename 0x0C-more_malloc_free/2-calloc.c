#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  allocates memory for an array using malloc
 * @nmemb:array
 * @size:element
 * Return:pointer p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
