#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe- free a listint_t
 * @h:pointer to a pointer to head
 * Return: freed size of list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur, *next;
	size_t n_cnt = 0;

	while (*h != NULL)
	{
		cur = *h;
		*h = (*h)->next;
		n_cnt++;

		cur->next = NULL;

		for (next = *h; next != NULL; next = next->next)
		{
			if (next == cur)
			{
				free(cur);
				*h = NULL;
				return (n_cnt);
			}
		}
		free(cur);
	}
	*h = NULL;
	return (n_cnt);
}
