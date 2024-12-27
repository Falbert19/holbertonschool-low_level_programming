#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number defining the size of the times table
 */

void print_times_table(int n)
{
	int row, col, product;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;

			if (col == 0)
				print_number(product);
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (product < 100)
				{
					_putchar(' ');
				}

				print_number(product);
			}
		}
		_putchar('\n');
	}
}

