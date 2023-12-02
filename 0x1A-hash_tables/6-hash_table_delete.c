#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;

	hash_node_t *node, *temp;

	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
