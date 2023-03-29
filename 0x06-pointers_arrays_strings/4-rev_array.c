#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: array
 * @n: Where n is the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
