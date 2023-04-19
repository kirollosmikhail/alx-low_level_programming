#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - a function that executes 
 * a function given as a parameter on each element of an array.
 *
 * @array: print each array
 * @size: the number of element to print
 * @action: pointer to print
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action && array)
	{
	for (x = 0; x < size; x++)
		action(array[x]);
	}
}
