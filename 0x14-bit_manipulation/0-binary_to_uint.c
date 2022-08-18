#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '\0' && b[a] != '1')
			return (0);
	}
		for (a = 0; b[a] != '\0'; a++)
		{
			c <<= 1;
			if (b[a] == '1')
				c += 1;
		}
		return (c);
}
