#include "list.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the nodes at index
 * @head: pointer to nodes
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeed, -1 if it fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
