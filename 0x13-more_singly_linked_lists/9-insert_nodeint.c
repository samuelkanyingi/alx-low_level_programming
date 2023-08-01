#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index-insert bnode at specific point in linked list
 * @head:pointer to a pointer to head
 * @idx:index of the list
 * @n:intger value in new node
 * Return:gives back address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	listint_t *tmp;
	unsigned int cnt = 0;

	if (head == NULL)
		return (0);
	if (idx == 0 || *head == NULL)
	{
		n_node = malloc(sizeof(listint_t));
		if (n_node == NULL)
			return (NULL);
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	tmp = *head;
	while (tmp != NULL && cnt < idx - 1)
	{
		tmp = tmp->next;
		cnt++;
	}
	if (tmp == NULL)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = tmp->next;
	tmp->next = n_node;
	return (n_node);
}
