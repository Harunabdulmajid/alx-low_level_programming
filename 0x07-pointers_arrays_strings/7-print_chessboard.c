#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard.
 * @a: row of array
 * Return: NULL
 */
void print_chessboard(char (*a)[8])
{
	int x, b;

	for (x = 0; x < 8; x++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(*(*(x + a) + b));
		}
		_putchar('\n');
	}
}


