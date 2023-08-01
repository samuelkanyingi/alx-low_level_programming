#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index index of a listint_t
 * @head:pointer to a pointer to head
 * @index: index to be deleted
 * Return: gives back 1 if it removed successfully or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur;
	listint_t *tmp;
	unsigned int cnt = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	while (cur != NULL && cnt < (index - 1))
	{
		cur = cur->next;
		cnt++;
	}
	if (cur == NULL || cur->next == NULL)
	{
		return (-1);
	}
	tmp = cur->next;
	cur->next = tmp->next;
	free(tmp);
	return (1);
}
