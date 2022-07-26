#include <stdio.h>
#include <stdlib>
/**
 * main - multiplies two arguements and prints number
 * @argc: number of arguements
 * @argv: pointer to array of arguements
 *
 * Return: 0 or 1
 */
int main(argc, char *argv[])
{
	int res = 0, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%\n", res);
	}
	return (0);
}
