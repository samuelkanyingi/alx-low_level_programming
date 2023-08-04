#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head:pointr to head
 * Return:address of new node or NULL if loop doesnt exist
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;
	
	if (head == NULL)
		return(NULL);

	while (f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			s = f;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (s);
		}
	}
	return (NULL);
}
