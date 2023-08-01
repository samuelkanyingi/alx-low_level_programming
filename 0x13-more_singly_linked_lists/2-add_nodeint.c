#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint- at a new node at beginning
 * @head:poiner to a pointer
 * @n:integer value
 * Return:address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
