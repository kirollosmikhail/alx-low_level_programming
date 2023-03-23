#include "main.h"

/**
 * print_square - prints a square
 *               followed by a new line;
 *
 * @size: size of the square
 *Return: size square
 */
void print_square(int size)
{
int iteration, seconditeration;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (iteration = 0; iteration < size; iteration++)
{
for (seconditeration = 0; seconditeration < size; seconditeration++)
{
_putchar('#');
}
_putchar('\n');
}
}
}


