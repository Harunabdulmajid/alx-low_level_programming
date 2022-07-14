#include "main.h"
#include <string.h>
/**
 * *leet - encodes a string
 * @x: - param x
 * Return: a string
 */
char *leet(char *x)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char tr[5] = {'a', 'e'. 'o', 't', 'l'};

	while (x[a])
	{
		b = 0;

		while (b < l)
		{
			if (x[a] == tr[b] || x[a] - 32 == tr[b])
				x[a] = trw[b];
			b++;
		}
		a++;
	}
	return (x);
}
