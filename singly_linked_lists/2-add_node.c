#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at beggining of list
 * @head: pointer to head of list
 * @str: string
 *
 * Return: address of elements, or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicated_str;
	size_t len = 0;
	size_t i;


		if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicated_str = malloc(len + 1);
	if (duplicated_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicated_str[i] = str[i];

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicated_str);
		return (NULL);
	}

	new_node->str = duplicated_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
