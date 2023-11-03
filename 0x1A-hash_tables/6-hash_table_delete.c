#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *curr, *tmp;

	if (ht == NULL)
	{
		return;
	}
	for (j = 0; j < ht->size; j++)
	{
		curr = ht->array[j];
		while (curr != NULL)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
