#ifndef POPPY_H
#define POPPY_H
/**
 * struct dog - data for dog
 * @name:pointer to dog name
 * @age:age of dog
 * @owner:pointer to keeper of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
