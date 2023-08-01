#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that outputs a listint_t linked list
 * @head:pointer to head
 * Return:number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new;
	int n_cnt = 0;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		printf("[%p]  %d\n", (void *)new, new->n);
		if (new <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		n_cnt++;
	}
	return (n_cnt++);
}
