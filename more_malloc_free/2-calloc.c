#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - alloc mem for an array
 * @nmemb: number of mem
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	p = malloc(len);

	if (p == NULL)
		return (NULL);

	while (i < len)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
