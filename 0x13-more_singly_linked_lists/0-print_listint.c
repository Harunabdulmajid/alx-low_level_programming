#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element
 * @h: pointer to elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *h;
	listint_t *new;
	
	new = malloc = (sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = h;



