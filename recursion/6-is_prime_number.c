#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - 1 if the input integer is a prime number, otherwise 0
 * @n: number
 * return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (is_prime_number(n, i + 1));
}

/**
 * is_prime_number - check prime number
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_number(n, 2));
}
