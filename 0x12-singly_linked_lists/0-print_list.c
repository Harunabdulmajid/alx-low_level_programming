#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the list
 * Return: number of the nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n, h->len, h->str");
		h = h->next;
		node++;
	}
	return (nodes);
}
