#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head:pointer to a pointer of head
 * Return:pointer to beginnng node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *n_node;

	while (*head != NULL)
	{
		n_node = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = n_node;
	}
	*head = back;
	return (*head);
}
