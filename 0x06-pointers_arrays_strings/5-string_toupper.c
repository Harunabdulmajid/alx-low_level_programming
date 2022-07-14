#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @x: string param
 * Return: string
 */
char *string_toupper(char *x)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
