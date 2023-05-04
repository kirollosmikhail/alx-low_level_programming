#include "main.h"

/**
* get_endianness - checks the machine is big or little
*
* Return: return 0 means big, return 1 means little
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}
