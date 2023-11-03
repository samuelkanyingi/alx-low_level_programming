#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table = NULL;

	if (size < 1)
	{
		return (NULL);
	}
	n_table = malloc(sizeof(hash_table_t));
	if (n_table == NULL)
	{
		return (NULL);
	}

	n_table->size = size;
	n_table->array = malloc(sizeof(hash_node_t *) * size);

	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}
	return (n_table);
}
