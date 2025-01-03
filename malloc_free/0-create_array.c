#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of char, initialized a spec char
 * @c: char
 * @size: size
 * Return: A pointer array, or NULL
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

		return (s);
}
