#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: param1
 * @b: param2
 * @n: interger array
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
