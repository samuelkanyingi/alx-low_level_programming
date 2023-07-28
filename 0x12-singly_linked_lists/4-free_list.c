#include "lists.h"
/**
 * free_list- function to free the list
 * @head:head list pointer
 */

void free_list(list_t *head)
{
	list_t *n_tmp;

	while (head != NULL)
	{
		n_tmp = head->next;
		free(head->str);
		free(head);
		head = n_tmp;
	}
}
