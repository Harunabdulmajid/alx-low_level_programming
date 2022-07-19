#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	char s[] = ("First solve the problem. Then, write the code");

	_puts_recurusion(s);
	_putchar("%c", s);
	_putchar('\n');
}

