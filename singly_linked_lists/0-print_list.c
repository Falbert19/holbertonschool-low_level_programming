#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - print elements form a list
 * @h: pointer
 *
 * Return: nodes from list
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

					h = h->next;
					node_count++;
	}

	return node_count;
}


