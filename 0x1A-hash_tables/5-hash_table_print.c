#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	int f = 1;
	unsigned long int j;
	hash_node_t *node;


	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		while (node)
		{
			if (f != 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			f = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
