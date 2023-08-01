#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint-function that returns the sum of nodes in linked list
 * @head:pointer to head
 * Return sum of all data in nodes or 0 is list is empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
