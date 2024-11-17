#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -concates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: integer
 * Return: point new alloc space s1 with n bytes s2, otherwise or fail NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, a = 0, b = 0, c = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[b])
		b++;
	if (n >= b)
		c = i + b;
	else
		c = i + n;
	str = malloc(sizeof(char) * c + 1);
	if (str == NULL)
		return (NULL);
	b = 0;
	while (a < c)
	{
		if (a <= i)
			str[a] = s1[a];
		if (c >= i)
		{
			str[a] = s2[b];
			b++;
		}
		a++;
	}
	str[a] = '\0';
	return (str);
}

