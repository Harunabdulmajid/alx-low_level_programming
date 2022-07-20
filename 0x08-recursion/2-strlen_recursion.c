#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - returns the lenghth of a string
 * @s: string to be returned
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
