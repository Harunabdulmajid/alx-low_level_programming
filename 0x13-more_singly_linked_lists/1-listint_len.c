#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked
 * @h: pointer to head
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
