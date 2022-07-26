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
	unsigned int i = 0;

	char *arr;

	arr = (char *) malloc(sizeof(char) * size);

	if (size == 0 || arr == 0)
	{
		return ('\0');
	}
	else if (size > 0)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
	}
	else
	{
		return ('\0');
	}
}
