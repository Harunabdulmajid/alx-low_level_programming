#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string
 * @dest: param1
 * @n:integer element
 * @src: param2
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
