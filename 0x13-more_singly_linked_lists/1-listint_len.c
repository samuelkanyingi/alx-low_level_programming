#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len-function to return elements
 * @h:pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
