#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - 1 if the input integer is a prime number, otherwise 0
 * @n: number
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check number
 * @n: number checked
 * @i: itiration
 * Return: 1 for prime or 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
