#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *alloc_grid - return pointer to a 2dimen array int
 * @width: - dimension x
 * @height: - dimension y
 * Return: 2 dim array or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, x;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{

			while (i > 0)
			{
				i--;
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			a[i][x] = 0;
		}
	}
	return (a);
}
