#include <stdio.h>
#include "main.h"

/**
 * print_line - this program will draw a straight line
 * @n: ASCII value to _
 * Return: void
 */

void print_line(int n)
{
	for (n = 0; n++;)
	{
		_putchar(95);
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
