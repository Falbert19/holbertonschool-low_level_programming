#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates 2 str using most
 *
 * an input number of bytes firn src
 *
 * @dest: str to append
 *
 * @src: str to append dest
 *
 * @n:number of bytes
 *
 * Return: A pointer to result str dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
