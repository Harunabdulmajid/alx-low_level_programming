#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to nodes
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
