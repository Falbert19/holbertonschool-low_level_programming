#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointr to a new alloc that contain a copy str
 * @str: string
 *
 * Return: pointer to dup, otherwise NULL
 */

char *_strdup(char *str)
{
	int a = 0;
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[a])
	{
		a++;
	}

	s = malloc((sizeof(char) * (a + 1)));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
	{
		s[i] = str[i];
	}

	s[a] = '\0';

	return (s);
}