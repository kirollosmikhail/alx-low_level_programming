#include "main.h"

/**
* set_bit - sets a value of a bit to 1 for given index
* 
* @n: pointer to number to change
* @index: index of the bit to set to 1
*
* Return: 1 if it success else return -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
	return (-1);
*n |= 1UL << index;
return (1);
}
