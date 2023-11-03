#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table
 * @size: size of array
 * Return: pointer to new sorte dhash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;

	shash_table_t *h_table = malloc(sizeof(shash_table_t));

	if (h_table == NULL)
	{
		return (NULL);
	}
	h_table->size = size;
	h_table->array = malloc(sizeof(shash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		h_table->array[i] = NULL;
	}
	h_table->shead = NULL;
	h_table->stail = NULL;
	return (h_table);
}
/**
 * shash_table_set -Add key/ value to sorted hash table
 * @ht: hash table
 * @key: key to add
 * @value: value assosiate dwith key
 * Return: 1 on succes , 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *n_node, *curr;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		curr = curr->next;
	}
	n_node = malloc(sizeof(shash_node_t));
	if (n_node == NULL)
	{
		return (0);
	}
	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(n_node);
		return (0);
	}
	n_node->value = strdup(value);
	if (n_node->value == NULL)
	{
		free(n_node->key);
		free(n_node);
		return (0);
	}
	n_node->next = ht->array[idx];
	ht->array[idx] = n_node;
	/*insert_sorted(ht, n_node);*/
	return (1);
}
/**
 * shash_table_get - get value assossiated with key
 * @ht: hash table
 * @key: key to look up
 * Return: value associated with key or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *curr;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}
return (NULL);
}
/**
 * shash_table_print - print sorted hash table
 * @ht: sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr = ht->shead;
	int f = 1;

	printf("{");
	while (curr != NULL)
	{
		if (!f)
		{
			printf(", ");
		}
		printf("'%s': '%s'", curr->key, curr->value);
		f = 0;
		curr = curr->snext;
	}

	printf("}\n");
}
/**
 * shash_table_print_rev - print sorte dlist in reverse order
 * @ht: sorted hash table in reverse
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr = ht->stail;
	int f = 1;

	printf("{");
	while (curr != NULL)
	{
		if (!f)
		{
			printf(", ");
		}
		printf("'%s': '%s'", curr->key, curr->value);
		f = 0;
		curr = curr->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete -delete sorted table
 * @ht: sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *curr, *tmp;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			tmp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}
	free(ht->array);
	curr = ht->shead;
	while (curr != NULL)
	{
		tmp = curr->snext;
		free(curr->key);
		free(curr->value);
		free(curr);
		curr = tmp;
	}
	free(ht);
}

