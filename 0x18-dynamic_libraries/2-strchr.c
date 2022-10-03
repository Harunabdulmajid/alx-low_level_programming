#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to be located
 * @c: character to look for
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
