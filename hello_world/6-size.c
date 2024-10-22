#include <stdio.h>
/**
 * main - this will print various types on the comptr and run on
 * Return: always 0
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("The sizes of an ints is: %lu.\n", (unsigned long)sizeof(i));
	printf("The sizes if an double is: %lu. \n", (unsigned long)sizeof(d));
	printf("The sizes of an c is: %lu. \n", (unsigned long)sizesof(c));

		return (0);
}
