#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
		return (_strlen_recursion(s) + 1);
}
