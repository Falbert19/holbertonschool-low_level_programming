#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes lowcases letters to a upper
 * @str: string
 * Return: A pointer to change
 */

char *string_toupper(char *str)
{

	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
