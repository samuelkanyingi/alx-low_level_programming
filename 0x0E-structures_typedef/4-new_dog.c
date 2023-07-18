#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age:age of dog
 * @owner: pointer to owner's name
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = (char *)malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
