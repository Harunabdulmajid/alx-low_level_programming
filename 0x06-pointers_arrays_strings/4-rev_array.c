#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - function that reverses array
 * @a: an array
 * @n:an element of an array
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < i / 2; i++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
