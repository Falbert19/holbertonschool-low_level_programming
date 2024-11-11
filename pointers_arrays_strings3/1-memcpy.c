#include <stdio.h>
#include "main.h"

/**
* *_memcpy - copies memory area
* @n: numbers of byte
* @src: source area
* @dest: destination
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
