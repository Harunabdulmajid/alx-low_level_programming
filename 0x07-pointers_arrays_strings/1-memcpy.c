#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: memory area
 * @src: param1
 * @n: interger array
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)

		dest[b] = src[b];

		return (dest);
}
