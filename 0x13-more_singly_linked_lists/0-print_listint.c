#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint-print all elements in a list
 * @h:pointer to head
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c;

	c = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
