#include "main.h"

/**
 * create_arrays - creates an array of char
 * @c: char of arrays
 * @size: size of the array
 * Return: a pointer to the array or NULL if it fails
 *
 */
char *create_arrays(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	t = malloc(sizeof(char) * size);
	if (t == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
