#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to list
 * @str: string
 *
 * Return: new elements, or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *duplicated_str;
	size_t len = 0;
	size_t i = 0;

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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
current->next = new_node;
return (new_node);
}

