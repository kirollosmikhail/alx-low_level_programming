#include "main.h"

/**
* get_endianness - checks the machine is big or little
*
* Return: return 0 means big, return 1 means little
*/

int get_endianness(void)
{
int x = 1;
int *ptr = &x;

if (ptr[0] == 1)
	return (1);
