#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of struct dog
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
