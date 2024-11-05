#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with constant byte
 * @n: number of bytes
 * @s: area pointed
 * @b: constant
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
