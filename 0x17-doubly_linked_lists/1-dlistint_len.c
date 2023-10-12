#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * @h: pointer to head
 * Return:  returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt++);
}

