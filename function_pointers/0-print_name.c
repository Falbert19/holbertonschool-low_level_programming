#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - string a str
 * @name: name to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
