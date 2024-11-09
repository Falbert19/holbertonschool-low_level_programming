#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates the first occu in string
 * @s: string
 * @accept: character
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (n = 0; accept[n] != '\0'; n++)
	{
		if (s[i] == accept[n])
				return (s + i);
	}
	}
	return (NULL);
}
