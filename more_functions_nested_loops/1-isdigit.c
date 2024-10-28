#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - check fit digit 0 to 9
 *@c:The ASCII value to check
 * Return: 1 if character is an digit, 0 for any else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
