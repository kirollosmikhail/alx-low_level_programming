#include "main.h"
#include <stdio.h>
/**
 * puts_half - that function that prints half of a string,
 * followed by new line.
 *
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, half = 0;

	for (x = 0; str[x] != '\0'; x++)
		half++;

	y = (half / 2);

	if ((half % 2) == 1)
		y = ((half + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		printf("%c", str[x]);
	printf("\n");
}
