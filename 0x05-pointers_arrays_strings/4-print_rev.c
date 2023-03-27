#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int i = 0, x = 0;

	while (*s != '\0')
	{
	x++;
	s++;
	}
	s--;
	for (i = x; i > 0; i--)
	{
	printf("%c", *s);
	s--;
	}
	printf("\n");
}
