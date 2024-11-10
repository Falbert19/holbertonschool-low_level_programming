#include "main.h"
#include <stdio.h>

/**
 * factorial - calculaste factorial number
 * @n: number to calc
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 0)
		return (1);

	return (n * factorial(n - 1));
}
