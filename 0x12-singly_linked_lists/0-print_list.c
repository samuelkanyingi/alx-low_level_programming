#include "lists.h"
/**
 * print_list - function to print the list
 * @h:pointer
 * Return: nCount
 */
size_t print_list(const list_t *h)
{
	int nCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nCount++;
	}
	return (nCount);
}
