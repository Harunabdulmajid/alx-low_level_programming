#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: memory area
 * @src: param1
 * @n: interger array
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)

		dest[a] = src[a];

		return (dest);
}

