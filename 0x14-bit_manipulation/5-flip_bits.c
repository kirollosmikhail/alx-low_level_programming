#include "main.h"

/**
* flip_bits - that the number of bits to
* flip  it from n to m
*
* @n: the first number
* @m: the second number
*
* Return: return the number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip = n ^ m;
unsigned long int numb = 0;

for (; flip > 0; flip >>= 1)
	numb += (flip & 1);
return (numb);
}
