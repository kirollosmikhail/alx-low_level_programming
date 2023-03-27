#include "main.h"
/**
 * _puts - that function thats  prints a string
 * followed by a new line to stdout using putchar
 *
 * @str: pointer of string  to  print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

