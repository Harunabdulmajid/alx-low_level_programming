#include "main.h"
#include <string.h>
/**
 * _strspn - getting the length of a substring
 * @s: segment to return bytes
 * @accept: bytes
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int x = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 5)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					x++;
			}
		}
		else
			return(x);
	}
		return (x);
}
