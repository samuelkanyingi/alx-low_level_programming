#include "lists.h"
/**
 * insrt - insert node between two nodes
 * @prev: pointer to previous node
 * @next: pointer to next node
 * @n_node: new node to insert
 * Return: address of new node
 */
dlistint_t  *insrt(dlistint_t *prev, dlistint_t	*next, dlistint_t *n_node)
{
	if (prev == NULL || n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->prev = prev;
	n_node->next = next;

	if (prev)
	{
		prev->next = n_node;
	}
	if (next)
	{
		next->prev = n_node;
	}
	return (n_node);
}

/**
 * insert_dnodeint_at_index - insert node at given position
 * @h:pointer to a pointer of head list
 * @idx: index of new node to insert
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *curr1, *prev1;
	unsigned int i = 0;

	if (h != NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	curr1 = *h;

	if (idx == 0)
	{
		n_node->next = curr1;
		n_node->prev = NULL;

		if (curr1)
		{
			curr1->prev = n_node;
		}
		*h = n_node;

		return (n_node);
	}
	while (curr1 && i < idx)
	{
		prev1 = curr1;
		curr1 = curr1->next;
		i++;
	}
	if (i != idx)
	{
		free(n_node);
		return (NULL);
	}
	return (insrt(prev1, curr1, n_node));
}
