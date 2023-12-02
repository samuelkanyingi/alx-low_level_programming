#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size:size of hash table array
 * Return: index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	 unsigned long int hash_code;

	 hash_code = hash_djb2(key);

return (hash_code % size);
}
