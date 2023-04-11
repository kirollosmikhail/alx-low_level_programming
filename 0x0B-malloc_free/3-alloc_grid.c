#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - a function that
* returns a pointer to a 2 dimensional array of integers.
*
*@width:  width of the input
*@height: height of the string
*
* Return: Return a pointer to a the 2 dimensional array of integers or
* If width or height is 0 or negative, return NULL
*/
int **alloc_grid(int width, int height)
{
int **twod;
int x, y, z;
int *p;

if (width <= 0 || height <= 0)
return (NULL);
twod = (int **)malloc(height * sizeof(int *));
if (twod == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
*(twod + x) = (int *)malloc(width * sizeof(int));
if (*(twod + x) == NULL)
{
for (x = 0; x < height; x++)
{
p = twod[x];
free(p);
}
free(twod);
return (NULL);
}
}
for (z = 0; z < height; z++)
{
for (y = 0; y < width; y++)
{
twod[z][y] = 0;
}
}
return (twod);
}
