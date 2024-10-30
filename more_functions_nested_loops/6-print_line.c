#include <stdio.h>
#include "main.h"

/**
 * print_line - this program will draw a straight line
 * @n: ASCII value to run
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
