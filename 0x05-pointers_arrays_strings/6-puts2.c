#include "main.h"
#include <string>

/**
 * puts2 - function that prints every other character of a string, starting with the first character.
 * @str - str parameter
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++);
		_putchar(str [i]);
	_putchar('\n');
}

