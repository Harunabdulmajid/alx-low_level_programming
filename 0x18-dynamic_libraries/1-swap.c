#include "main.h"
#include <stdio.h>

/**
 * swap_int - Functions that swap the values of two intergers
 * @a: interger param1
 * @b: interger param2
 */
void swap_int(int *a, int *b)
{
	int amp;

	amp = *a;
	*a = *b;
	*b = amp;
}
