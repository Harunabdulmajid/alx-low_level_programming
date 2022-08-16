#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to nodes
 * @n: node
 * Return: address of a new element. NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
