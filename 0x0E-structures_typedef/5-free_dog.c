#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dog memory allocated
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
