#include "lists.h"
#include <stdlib.h>

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
	size_t len = 0;
	size_t i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str  = malloc(len + 1);
	if(new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	for (i = 0; i < len; i++)
		new_node->str[i] = str [i];
	new_node->str[len] = '\0';

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

