#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: the first element of the array.
 * @max: the last element of the array.
 *
 * Return: the pointer to the newly created array
 * or NULL if malloc fails.
 *
 */

int *array_range(int min, int max)
{
	int *x = NULL, iter;

	if (min > max)
		return (NULL);
	max = max - min + 1;
	x = malloc(max * sizeof(*x));
	if (!x)
		return (NULL);
	for (iter = 0; iter < max; iter++)
	{
		x[iter] = min;
		min++;
	}
	return (x);
}
