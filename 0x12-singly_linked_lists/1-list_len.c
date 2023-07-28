#include <stddef.h>
#include "lists.h"
/**
 * list_len- function to get length of list
 * @h:pointer to head
 * Return: nCount
 */
size_t list_len(const list_t *h)
{
	int nCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nCount++;
	}
	return (nCount);
}
