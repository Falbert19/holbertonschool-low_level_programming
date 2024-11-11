#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: source or string
 * @c: character/
 * Return: character or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0, b;

	while (s[i])
	{
		i++;
	}

	for (b = 0; b <= i; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
			}
	}
	return ('\0');
}

