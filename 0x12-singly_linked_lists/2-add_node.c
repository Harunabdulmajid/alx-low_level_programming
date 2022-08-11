#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head:  head of the list
 * @str: what goes into the node
 * Return: address of new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int x;
	list_t *new;

	if (!(head && str))
		return (NULL);
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	for (x = 0; str[x]; x++)
	{}
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = x;
	new->next = *head;
	*head = new;

	return (new);
}
