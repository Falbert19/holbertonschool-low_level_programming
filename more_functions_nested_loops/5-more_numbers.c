#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int n, x;

	for (n = 0; n < 10; n++)
	{
	for (x = 0; x <= 14; x++)
	{
	if (x > 0)
	{
		_putchar((x / 10) + '0');
	}
	_putchar((x % 10) + '0');
	}
		_putchar('\n');
	}
}
