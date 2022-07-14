#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenate two strings
 * @dest: param1
 * @n:param2
 * @src:param3
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
