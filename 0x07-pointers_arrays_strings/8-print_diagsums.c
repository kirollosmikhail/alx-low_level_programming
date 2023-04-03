#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a: input
 * @size: input
 *
 * Return: Always Return 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int total, sum, y;

	total = 0;
	sum = 0;

	for (y = 0; y < size; y++)
	{
		total = total + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", total, sum);
}
