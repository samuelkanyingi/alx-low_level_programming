#include "lists.h"
/**
 * free_dlistint - free a  dlistint list
 * @head: Pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;

		free(curr);
	}
}
