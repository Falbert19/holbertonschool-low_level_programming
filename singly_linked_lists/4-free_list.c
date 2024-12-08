#include "lists.h"
#include <stdlib.h>

/**
 * free_list - functions that free a list
 * @head: pointer to beginning of list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp->str)
		free(temp->str);
		free(temp);

	}
}
