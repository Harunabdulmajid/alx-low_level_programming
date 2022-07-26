#include <stdio.h>
/**
 * main - prints the number of arguements passed
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv++;
	return (0);
}
