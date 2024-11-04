#include "main.h"
#include <stdio.h>

/**
 * reverse_array - rev the cintet of int
 * @a: array of int rev
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
