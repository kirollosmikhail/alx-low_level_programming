#include "main.h"

/**
 * print_numbers - function to print by using putchar 0-9
 * return: there is no return
 */

void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
	_putchar(c);
}
_putchar('\n');
}
