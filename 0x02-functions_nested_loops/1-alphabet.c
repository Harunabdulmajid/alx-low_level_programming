#include "main.h"
/**
 * main - print alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 'A';

	while (x <= 'Z')

	{
		x = tolower(x);
		putchar(x);
		x++;
	}
}
