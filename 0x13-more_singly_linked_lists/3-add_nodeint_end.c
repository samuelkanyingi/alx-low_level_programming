#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end-add node at end of list
 * @head:pointer to a pointer
 * @n:integer
 * Return:address of the new element otherwise fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *l_node = *head;

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (l_node->next != NULL)
		{
			l_node = l_node->next;
		}
			l_node->next = n_node;
		}
		return (n_node);
}
