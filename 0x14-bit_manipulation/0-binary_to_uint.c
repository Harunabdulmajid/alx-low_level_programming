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
	int x = 0;
	unsigned int i = 0;
	int pow = 0;

	if (b == '\0')
		return (0);

	while ([x + 1])
		x++;

	while (x >= 0)
	{
		if (b[x] == '0')
		{
			x--;
			pow++;
		}
		else if (b[x] == '1')
		{
			n += (1 << pow);
			x--;
			pow++;
		}
		else
			return (0);
	}
	return (i);
}
