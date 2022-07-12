#include "main.h"
#include <stdio.h>

/**
 * print_rev - funtion that prints a string in reverse followed by a new line
 * Return: Always 0
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

