#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: gives index of a key
 * @size: gives size of array
 * Return: index to store key/value pair in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_value;

	if (key == NULL || size == 0)
		return (0);
	h_value = hash_djb2(key);
	return (h_value % size);
}
