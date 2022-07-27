#include "main.h"
#include <stdlib.h>
/**
 * str_cat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: null or new location
 *
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0; size2 = 0, i = 0, j = 0;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0'
	{
		size++;
	}
	while (s1[size2] != '\0'
	{
		size++;
	}
	new = malloc((sizeof(char) * size1)
