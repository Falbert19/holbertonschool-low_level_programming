#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print struct of dog
 * @d: dog structure
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
				printf("Age: %f\n", (d->age) ? d->age : 0);
				printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
