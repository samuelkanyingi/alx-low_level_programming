#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - function
 * @struct dog d:parameter
 * @name:name of dog
 * @age:age of dog
 * owner:keeper of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = (char *)malloc(strlen(name) + 1);
	d->owner = (char *)malloc(strlen(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		printf("memory allocation fail\n");
		return;
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;
}
