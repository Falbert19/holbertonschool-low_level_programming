#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of list
 * @head: pointer to head of list
 *
 * Return: sum of data,or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

