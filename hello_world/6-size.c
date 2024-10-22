#include <stdio.h>
/**
 * main - this will print various types on the comptr and run on
 * Return: always 0
 */
int main(void)
{
	char c;
	int i;
	long long k;
	long l;
	float f;

	printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("Size if an int: %lu byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(l));
	printf("Size of a long long: %lu byte(s) \n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));

		return (0);
}
