#include "main"
/**
 * print_sign - prints a sign of numbers
 * @n: arguement passed
 * Return: return 1 0 -1
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
