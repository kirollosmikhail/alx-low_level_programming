#include "main.h"

/**
 * print_number - that prints an integer 
 * @num: the integer to be printed
 * using putchar
 */
void print_number(int num)
{
	unsigned int n1;

	if (num < 0)
	{
		n1 = -num;
		_putchar('-');
	} else
	{
		n1 = num;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
