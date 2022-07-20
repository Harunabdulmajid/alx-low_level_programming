#include "main.h"
/**
 * prime - searches for a prime number
 * @a: number to be searched
 * @b: numbers to be examined
 * Return: a value that is prime or not
 */
int prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		prime(a, b + 1);
	return (1);
}

/**
 * is_prime_number - determine if its an interger or not
 * @n: number to check
 * Return: 0 if the number is a prime, 1 if its not
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
