#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- function that frees previous question listint_t
 * @head:pointer
 */
void free_listint(listint_t *head)
{
	listint_t *cur;
	listint_t *n_node;

	cur = head;

	while (cur != NULL)
	{
		n_node = cur->next;
		free(cur);
		cur = n_node;
	}
}
