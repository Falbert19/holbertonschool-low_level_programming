#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the val of 2 int
 * @a: the first int
 * @b: the second int
 *
 * Return: 0
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
