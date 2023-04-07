#include "main.h"
/**
*_memcpy - function that copies memory area.
*
*@dest: memory is where stored
*@src: memory is where copied
*@n: number of the bytes
*
*Return: return copy memory with n bytes changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x = 0;
int y = n;

for (; x < y; x++)
{
dest[x] = src[x];
n--;
}
return (dest);
}
