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
	strncat(dest, src, n);
	return (dest);
}
