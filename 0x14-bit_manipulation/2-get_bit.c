#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value of bit
 * @index: index starting from 0
 * Return: value of the index or - 1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
