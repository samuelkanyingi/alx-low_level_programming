#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head:pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;
	listint_t *n_node;

	if (head == NULL || *head == NULL)
		return;
	cur = *head;

	while (cur != NULL)
	{
		n_node = cur->next;
		free(cur);
		cur = n_node;
	}
	*head = NULL;
}
