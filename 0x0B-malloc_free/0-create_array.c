#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: array
 * @c: character
 *
 * Return: Return NULL if size is 0 , Return pointer of x in array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *x;

	x = malloc(sizeof(char) * size);

	if (size == 0 || x == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	x[i] = c;
return (x);
}
