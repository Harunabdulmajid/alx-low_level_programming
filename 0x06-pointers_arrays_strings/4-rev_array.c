#include "main.h"
/**
 * reverse_array - function that reverses array
 * @a: an array
 * @n:an element of an array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = j - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
