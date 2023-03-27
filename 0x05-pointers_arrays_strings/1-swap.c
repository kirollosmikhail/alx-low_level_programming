#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: the first
 * @b: the second
 */

void swap_int(int *a, int *b);
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
