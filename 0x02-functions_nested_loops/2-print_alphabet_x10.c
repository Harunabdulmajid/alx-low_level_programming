#include "main"
/**
 * main - prints alphabet 10x
 *
 * Return:
 */
void print_alphabet_x10(void);
{
	int j;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
