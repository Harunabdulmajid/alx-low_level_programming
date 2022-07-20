#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial of a given number
 * @n: value in numbers
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);
	else if (n == 0)

		return (1);

	return (n * factorial(n - 1));

}
