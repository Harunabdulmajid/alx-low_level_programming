#include "main.h"

/**
 * is_prime-number - searches for a prime number
 * @n: number to be searched
 * @i: numbers to be examined
 * Return: a value that
 */

int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (i == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, i + 1));
}

/**
 * is_prime_number - determines prime number
 *
 * @n: the number to check
 *
 * Return: 0 is its a prime number, 1 if its not
 */

int is_prime_number(int n)
{
	int n = 2;

	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, i));
}
