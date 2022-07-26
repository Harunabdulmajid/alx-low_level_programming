#include "main.h"
#include <stdlib.h>
/**
 * create_arrays - creates an array of char
 * @c: char of arrays
 * @size: size of the array
 * Return: a pointer to the array or NULL if it fails
 *
 */
char *create_arrays(unsigned int size, char c)
{
	unsigned int i;

	char *str

	str = malloc(size of(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
