#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 * @min: array min
 * @max: array max
 * Return: pointer newly created array
 */

int *array_range(int min, int max)
{

	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
