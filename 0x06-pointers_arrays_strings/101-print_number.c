#include "main.h"
/**
 * print_number - printing numbers
 * @n: interger param
 * Return 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)

		print_number(n1 / 10);

	_putchar(n1 % 10 + '0');
}
