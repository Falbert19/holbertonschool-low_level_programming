#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this will print the alphabet in lowr and then in upper
 * Return: always 0 (Success)
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
