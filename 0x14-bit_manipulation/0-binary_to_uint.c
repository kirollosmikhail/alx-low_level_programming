#include "main.h"

/**
  * binary_to_uint - thats convert a binary number to a
  * unsigned integer
  *
  * @b: string of binary number
  *
  * Return: return 0 if b is NULL
  * return the converted if success else return 0;
  */

unsigned int binary_to_uint(const char *b)
{
int itr;
unsigned int test = 1, conv = 0;

if (!b)
	return (0);
for (itr = strlen(b) - 1; itr > -1; itr--)
{
	if (b[itr] == '1')
		conv += test;
	else if (b[itr] != '0')
		return (0);
	test = 2 * test;
}
return (conv);
}
