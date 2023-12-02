#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_one = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first_one != 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			first_one = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
