#include "main.h"
/**
 * print_triangle - that prints a triangle
 *            followed by a new line
 *
 * @size: the size of the triangle that prints
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j, x;

		for (j = 1; j <= size; j++)
		{
			for (x = j; x < size; x++)
			{
				_putchar(' ');
			}

			for (x = 1; x <= j; x++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
