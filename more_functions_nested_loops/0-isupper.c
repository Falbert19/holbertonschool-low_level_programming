#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isupper - checks uppercase
 * @x: ASCII value of the character to check
 *
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
