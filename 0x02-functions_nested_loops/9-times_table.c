#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the timetable 10 times
 * @n: Starting point
 */
void times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
			 	if (j == 0)
				{
{
