#include "main.h"
/**
 * print_to_98 - prints n to 98
 * Return: Always 0
 * @n: parameter
 */
void print_to_98(int n);
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n = n + 1;
		}
	} else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n = n - 1;
		}
	}
}
