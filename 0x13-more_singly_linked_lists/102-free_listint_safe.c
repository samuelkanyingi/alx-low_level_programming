#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe- free a listint_t
 * @h:pointer to a pointer to head
 * Return: freed size of list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur;
	

	size_t n_cnt = 0;

	while (cur != NULL)
	{
		cur = *h;
		*h = (*h)->next;
		n_cnt++;

		if (cur <= cur->next)
		{
			*h = NULL;
			free(cur);
			return (n_cnt);
		}
		free(cur);
	}
	return (n_cnt);
}
