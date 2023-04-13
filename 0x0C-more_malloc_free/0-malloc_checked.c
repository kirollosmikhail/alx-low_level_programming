#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -  a function that allocates memory using malloc
 *
 * @b: number of bytes
 *
 * Return: Returns a pointer to the allocated memory
 * if fail terminate and return value 98
 *
 */

void *malloc_checked(unsigned int b)
{
int *s;

	s = malloc(b)
	if (s == NULL)
	exit(98);

	return (s);
}
