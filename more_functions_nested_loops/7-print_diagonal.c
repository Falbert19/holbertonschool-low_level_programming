#include <stdio.h>
#include "main.h"

/**
 * print diagonal - draw a diagonal line in terminal
 * @n: ASCII value tu /
 * Return: 0
 */

void print_diagonal(int n)

{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		for (x = 0; x < i; x++)
		{
			_putchar(32);
		}
		_putchar(92);
	_putchar('\n');
}
}
}
