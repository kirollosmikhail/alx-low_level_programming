#include <stdlib.h>
#include "main.h"

/**
  * _realloc -  a function that reallocates
  * a memory block using malloc and free
  *
  * @ptr: ptr is a pointer to the memory previously
  * allocated with a call to malloc
  * @old_size: old_size is the size, in bytes,
  * of the allocated space for ptr
  * @new_size: new_size is the new size,
  * in bytes of the new memory block
  *
  * Return: Return new_size is 0 Return NULL
  * else, returns ptr
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
	return (ptr);

if (new_size > old_size)
{
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
if (ptr == NULL)
{
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}

if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

free(ptr);
ptr = malloc(new_size);
return (ptr);
}
