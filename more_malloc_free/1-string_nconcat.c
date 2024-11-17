#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -concates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: bytes
 * Return: point new alloc space s1 with n bytes s2, otherwise or fail NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, a = 0, b = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[a])
		a++;

	if (n >= a)
		len = i + a;

	else
		len = i + n;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (b = 0; b < i; b++)
		str[b] = s1[b];

	for (b = 0; b < n && s2[b]; b++)
		str[i + b] = s2[b];

	str[len] = '\0';

	return (str);
}

