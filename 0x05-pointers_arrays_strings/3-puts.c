#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * Return: Always p
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

