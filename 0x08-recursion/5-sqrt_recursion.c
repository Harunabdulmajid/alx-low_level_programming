#include "main.h"
/**
 * find_sqr - natural square of a number
 * @n: integer param1
 * @a: interger param2
 * Return: int
 */
int find_sqr(int a, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if ((a * a) < n)
	{
		return (find_sqr(a + 1, n));
	}
	else if ((a * a) == n)
	{
		return (a);
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number given
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	if (a < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqr(a, n));
	}
}
