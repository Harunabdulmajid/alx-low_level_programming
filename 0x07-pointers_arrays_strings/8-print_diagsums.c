#include "main.h"
/**
 * print_diagsums - prints sum of 2 diagonals
 * @a: name of the array
 * @size: size of th array
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int c = 0;
	int b = size - 1;

	int sum1 = 0;

	int sum 2 = 0;


	while (c <= (size * size))
	{
		sum1 = sum1 + a[c];
		c = c + size + 1;
	}

	while (b < (size * size - 1))
	{
		sum2 += a[b];
		b = b + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
