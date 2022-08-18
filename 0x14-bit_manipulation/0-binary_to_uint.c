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
	int i = 0;
	unsigned int n = 0;
	int pow = 0;

	if (b == '\0')
		return (0);

	while (b[i + 1])
		i++;

	while (i >= 0)
	{
		if (b[i] == '0')
		{
			i--;
			pow++;
		}
		else if (b[i] == '1')
		{
			n += (1 << pow);
			i--;
			pow++;
		}
		else
			return (0);
	}
	return (n);
}
