#include "main.h"

/**
 * flip_bits - Calculates the number of bits to flip to convert one number to another.
 * @n: number
 * @m: 2nd number
 *
 * Return: numbers bit flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m; /* XOR to find differing bits */
	unsigned int count = 0;

	while (xor)
    {
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}

