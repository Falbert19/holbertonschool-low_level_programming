#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 *
 * Return: 1 if work, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

