#include <stdlib.h>
#include <time.h>
/**
 * main - this will assign a random number to the var n each time is exe
 * Return always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);
}
