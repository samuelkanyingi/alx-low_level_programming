#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:pointer to the memory previously allocated
 * @old_size:size, in bytes, of the allocated space for ptr
 * @new_size:new size, in bytes of the new memory block
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int copy;
	void *n_ptr;
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	n_ptr = malloc(new_size);

	if (n_ptr == NULL)
		return (NULL);
	copy = (old_size < new_size) ? old_size : new_size;

	memcpy(n_ptr, ptr, copy);

	free(ptr);

	return (n_ptr);
}
