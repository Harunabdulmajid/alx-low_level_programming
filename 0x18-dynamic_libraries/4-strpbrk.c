#include "main.h"
#include <string.h>
/**
 * _strpbrk - search for a string
 * @s: the string to search
 * @accept:bytes to search for
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])

				return (s);
		}
		s++;
	}
	return (NULL);
}


