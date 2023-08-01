#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete head node of a listint_t linked list
 * @head:pointer to a pointer
 * Return:the deleted node
 */
int pop_listint(listint_t **head)
{
	int d = 0;
	listint_t *tmp;

	tmp = *head;

	if (head == NULL || *head == NULL)
		return (0);
	d = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (d);
}
