#include "main.h"
#include <stdlib.h>

/**
  * _calloc - a  function that allocates memory for an array, using malloc
  *
  * @nmemb: Number of elements in  array
  * @size: Number of bytes for every element
  *
  * Return:  returns a pointer to the allocated memory.
  * or NULL if malloc fails.
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int itr;
char *character = NULL;


	if (nmemb == 0 || size == 0)
		return (NULL);
	character = malloc(size * nmemb);
	if (!character)
		return (NULL);
	for (itr = 0; itr < nmemb * size; itr++)
		character[itr] = 0;
	return (character);
}
