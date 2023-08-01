#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index-function to find the nth node
 * @head:pointer to head
 * @index:this is defined as current position of node
 * Return:pointer of the given nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur = head;
	unsigned int c = 0;

	while (cur != NULL)
	{
		if (c == index)
			return (cur);
		cur = cur->next;
		c++;
	}
	return (NULL);
}
