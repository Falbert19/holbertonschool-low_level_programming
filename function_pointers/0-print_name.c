#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name to print
 * @f: function pointer
 * @char: str
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	if (name && f)
		f(name);
}
