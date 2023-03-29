#include "main.h"
/**
 * string_toupper - that function  change all lowercase to uppercase
 * 
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int iteration = 0;

	while (n[iteration] != '\0')
	{
		if (n[iteration] >= 'a' && n[iteration] <= 'z')
			n[iteration] = n[iteration] - 32;
		iteration++;
	}
	return (n);
}
