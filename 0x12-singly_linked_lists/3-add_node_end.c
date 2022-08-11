#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: points to head
 * @str: string to insert
 * Return: pointer to the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list *newnode, *end;
	unsigned int x;

	if (!(head && str))
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	for (x = 0; str[x]; x++)
	{}
	newnode->len = x;
	newnode->next = NULL;

	if (!head)
	{
		*head = newnode;
		return (newnode);
	}
	end = *head;
	while (end->next)
	{
		end = end->next;
	}
	end->next = newnode;
	return (newnode);
}
