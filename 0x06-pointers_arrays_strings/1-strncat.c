#include "main.h"

/**
 * *_strncat - function that concatenate two strings
 * @dest: param1
 * @n:param2
 * @src:param3
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_leng, i;

	for (dest_long = 0; dest[dest_leng] != '\0'; dest_leng++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_long + i] = src[i];
	dest[dest_leng + i] = '\0';

	return (dest);
}
