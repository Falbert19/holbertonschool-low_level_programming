#include <stdlib.h>
#include "dog.h"

/**
 * _strlength - Calculates the length of a string
 * @str: The string whose length is to be calculated
 *
 * Return: Length of the string
 */

int _strlength(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcopy - Copies a string to a new location
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to the destination string
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog_t, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	name_copy = malloc(_strlength(name) + 1);
	if (!name_copy)
	{
		free(dog);
		return (NULL);
	}
	_strcopy(name_copy, name);

	owner_copy = malloc(_strlength(owner) + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	_strcopy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}

