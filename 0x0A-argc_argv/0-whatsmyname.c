#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: arguement count
 * @argv: arguement vector
 */
void (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar("%s", argv[i]);
	}
	_putchar('\n');
}
