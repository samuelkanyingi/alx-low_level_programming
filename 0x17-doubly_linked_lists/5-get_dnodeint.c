#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to head of list
 * @index: index start at 0
 * Return: nth node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
		{
			return (head);

		}
		head = head->next;
		cnt++;
	}
	return (NULL);
}
