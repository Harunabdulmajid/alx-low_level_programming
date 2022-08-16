#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to nodes
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
