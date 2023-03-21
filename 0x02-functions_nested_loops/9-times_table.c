#include "main.h"

/**
 * times_table - prints the 9 times table
 * Example Table
 *0, 0, 0, 0, ...
 *0, 1, 2, 3, ...
 */
void times_table(void)
{
	int n, j, x;

	for (n = 0; n < 10; n++)
	{
		for (j = 0; j < 10; j++)
		{
			x = j * n;
			if (j == 0)
			{
				_putchar(x + '0');
			}

			if (x < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			} else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
