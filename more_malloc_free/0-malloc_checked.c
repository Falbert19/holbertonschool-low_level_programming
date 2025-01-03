#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: size to allocate
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
