#include "main.h"

/**
 * get_bit - give the value of a bit at an index
 * @n: number
 * @index: index
 *
 * Return: value index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n & (1UL << index)) != 0);
}

