#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: row of array
 * @size: param1
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int c, sum1 = 0; sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 += a[(size + 1) * c];
		sum2 += a[(size -1) * (c + 1)];
	}
	{
		printf("%d, %d\n" sum1, sum2);
	}
}
