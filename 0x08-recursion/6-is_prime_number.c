#include "main.h"
#include <stdio.h>
/**
 * prime - searches for a prime number
 * @a: number to be searched
 * @b: numbers to be examined
 * Return: a value that
 */
int primeSearcher(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeSearcher(a, b + 1);

	return (1);
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
	return (primeSearcher(n, 2));
}
