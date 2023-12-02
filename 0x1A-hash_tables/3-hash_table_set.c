#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value mapped with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;

hash_node_t *n_node, *curr;
idx = key_index((unsigned char *)key, ht->size);
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
n_node = malloc(sizeof(hash_node_t));
if (n_node == NULL)
return (0);
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
return (1);
}
