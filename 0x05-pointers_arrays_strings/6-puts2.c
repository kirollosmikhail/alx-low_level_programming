#include "main.h"
#include <stdio.h>
/**
 * puts2 - that function prints every other character of a string
 * followed by a new line.
 *
 * @str: input
 *
 * Return: printf function
 */

void puts2(char *str)
{
	int cp = 0, j = 0, i;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		cp++;
	}
	j = cp - 1;
	for (i = 0 ; i <= j ; i++)
	{
		if (i % 2 == 0)
	{
		printf("%c", str[i]);
	}
	}
	printf("\n")
}
