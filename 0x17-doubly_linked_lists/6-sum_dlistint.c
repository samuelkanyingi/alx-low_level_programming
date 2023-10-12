#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum of all the data
 * @head: pointer to head list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
