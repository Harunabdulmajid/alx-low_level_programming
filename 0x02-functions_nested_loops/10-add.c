#include "main.h"
#include <stdio.h>
/**
 * add  - add the value of two interger
 * @a:parameter
 * @b:parameter
 * Return: Always 0
 */
int add(int a, int b)
{
	int sum = (a + b);

	_putchar((sum / 10) + '0');
	_putchar((sum % 10) + '0');
	return (0);
}
