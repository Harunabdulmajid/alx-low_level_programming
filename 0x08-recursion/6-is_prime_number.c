#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - searches for a prime number
 * @n: number to be searched
 * Return: a value that
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checking all number
 * @n: int
 * @resp: int
 * Return: int
 */

int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
