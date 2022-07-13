#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: paramter
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len, i, half;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;

	half = len / 2;

	while (half--)
	{
		tmp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}

