#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to next node
 * Return: address of nodes, or NULL if there is none
 */
listint_t *find_listint_loop(listint_t *head)
{
