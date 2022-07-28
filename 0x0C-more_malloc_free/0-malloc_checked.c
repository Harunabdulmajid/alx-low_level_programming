#include "main.h"
#include <string.h>
/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: no. to allocate memory for
 *
 * Return: Returns a pointer to the allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
