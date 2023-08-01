#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint-function that returns the sum of nodes in linked list
 * @head:pointer to head
 * Return: sum of all data in nodes or 0 is list is empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *m = head;

	if (head == NULL)
	{
		return (0);
	}

	while (m != NULL)
	{
		s = s + m->n;
		m = m->next;
	}
	return (s);
}
