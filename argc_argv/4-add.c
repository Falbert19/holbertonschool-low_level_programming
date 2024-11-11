#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - add positive numbers
 * @argc: arg c
 * @argv: arg v
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int i;
	unsigned int k, sum = 0;
	char *w;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		w = argv[i];

		for (k = 0; k < strlen(w); k++)
		{
			if (w[k] < 48 || w[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(w);
		w++;
		}
		printf("%d\n", sum);
	}

	else
	{
		printf("0\n");
	}
	return (0);
}
