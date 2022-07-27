#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of string
 * @s: char
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;

	}
	return (i);
}

/**
 * str_concat - concat 2 strings
 * @s1: first string
 * @s2: second string
 * Return: Char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i1, i2;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		i2 = _strlen(s2);
	conc = malloc(i1 + i2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;
	return (conc);
}
