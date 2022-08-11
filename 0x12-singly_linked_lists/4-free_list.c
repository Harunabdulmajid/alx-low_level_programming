#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: points to the beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *clear;

	while (head)
	{
		clear = head;
		head = head->next;

		free(clear->str);
		free(clear);
	}
}
