#include "main.h"
/**
 * _strdup - returns newly allocated space
 * @str: string given
 * Return: location of the new memory
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	new = malloc(sizeof(char) * size + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new[i] = str[i];
	}
	return (new);


}
