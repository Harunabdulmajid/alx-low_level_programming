#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - points a parameter and update the value
 * @n: interger param
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int n;

	n = 98;
	_putchar("n=%d\n", n);
	reset_to_98(&n);
	_putchar("n=%d\n", n);
	return (0);
}
