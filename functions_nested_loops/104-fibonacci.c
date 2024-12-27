#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 92; count++)
	{
		unsigned long next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}


	fib1_half1 = fib1 / 1000000000;
	fib1_half2 = fib1 % 1000000000;
	fib2_half1 = fib2 / 1000000000;
	fib2_half2 = fib2 % 1000000000;

	for (; count <= 98; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (half2 >= 1000000000)
		{
			half1 += half2 / 1000000000;
			half2 %= 1000000000;
		}

		printf(", %lu%09lu", half1, half2);

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}

	printf("\n");
	return (0);
}

