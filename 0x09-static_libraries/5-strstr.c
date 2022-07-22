#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: longer string to search
 * @needle: substring to search for
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int y = 0;

	while (needle[y] != '\0')
		y++;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])

				break;
		}
		if (a != y)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
