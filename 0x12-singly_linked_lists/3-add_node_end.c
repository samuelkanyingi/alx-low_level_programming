#include "lists.h"
/**
 * add_node_end - function to add at end of list
 * @head:pointer to apointer to head
 * @str:string to be duplicated
 * Return: new address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *tmp;

	if (str == NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(list_t));
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = strlen(str);
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = n_node;
	}
	return (n_node);

}
