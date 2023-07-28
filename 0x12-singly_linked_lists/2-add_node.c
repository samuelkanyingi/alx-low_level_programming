#include "lists.h"

/**
 * add_node-  function to add a new node
 * @head:pointer to head list
 * @str:string to be duplicated.
 * Return: new head address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str =  strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
