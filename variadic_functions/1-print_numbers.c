#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @separator: string to be printed
 * @n: number
 * @...: variable
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
        int num = va_arg(args, int);
        printf("%d", num);

        if (separator != NULL && i < n - 1)
        printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
