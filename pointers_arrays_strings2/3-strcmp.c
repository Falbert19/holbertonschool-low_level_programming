#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares pointers
 * @s1: pointer to 1st str
 * @s2: pointer to 2nd str
 * Return: If str1 < str , negative diference to unmatched char
 * If str1 == str 2, 0.
 * If str1 > str2, positive difference to unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
