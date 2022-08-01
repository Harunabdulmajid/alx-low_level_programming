#include <stdio.h>
#include "header.h"
/**
 * main - prints the name of th file it was compile from
 * Return: 0 success
 */
int main (void)
{
	printf("%s", __FILE__);
}
