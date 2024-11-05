#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy a input number
 * of bytes frim str src to dest
 * @dest: the buffer storing
 * @src: source str
 * @n: max number of bytes
 * Return: A pointer ro result
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
