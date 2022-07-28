#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 * @size: size of that element type
 *
 * Return: pointer to the allocated memory
 * NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned a;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < (size * nmemb); a++)
		ar[a] = 0;
	return (ar);
}
