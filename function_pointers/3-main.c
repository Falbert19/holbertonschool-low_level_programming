#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument character
 * @argv: argument V
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	result = oprt(num1, num2);
	printf("%d\n", result);
	return (0);
}
