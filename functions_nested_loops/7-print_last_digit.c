#include "main.h"

/**
 * print_last_digit - Print last digits of num
 * @n: The number to be checked
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
