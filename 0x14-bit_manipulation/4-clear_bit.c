#include "main.h"

/**
* clear_bit - function to sets the value
* of a bit to 0
*
* @n: that is a pointer to the number to change
* @index:  that the index to clear
*
* Return: return 1 success , else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
	return (-1);
*n &= ~(1UL << index);
return (1);
}
