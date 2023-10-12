#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * @head: pointer to a pointer of head list
 * @n: value to be stored
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	if (head == NULL)
	{
		return (NULL);
	}
		n_node = malloc(sizeof(dlistint_t));
		if (n_node == NULL)
			return (NULL);
		n_node->n = n;
		n_node->prev = NULL;

		if (*head != NULL)
			(*head)->prev = n_node;
		n_node->next = *head;
		*head = n_node;

		return (n_node);
}
