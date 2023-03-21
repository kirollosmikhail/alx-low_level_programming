#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * separated by comma,followed by space
 * followed by a new line
 * @n: input
 */
void print_to_98(int n)
{
	int x, j;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
