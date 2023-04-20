#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
* aux - checks if comma btween the chars
*
* @x: num of character that counted
* @z: the length
*
*/

void aux(size_t x, size_t z)
{
	if (x < z - 1)
		printf(", ");
}

/**
* print_all - a function that prints anything.
*
* @format: format is a list of types of arguments
* passed to the function
*
*/

void print_all(const char * const format, ...)
{
	va_list list;
	size_t x = 0, z = 0;
	char *str;

	if (format)
	{
		va_start(list, format);
		z = strlen(format);

		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					aux(x, z);
					break;

				case 'x':
					printf("%d", va_arg(list, int));
					aux(x, z);
					break;

				case 'f':
					printf("%f", va_arg(list, double));
					aux(x, z);
					break;

				case 's':
					str = va_arg(list, char *);
					printf("%s", str == NULL ? "(nil)" : str);
					aux(x, z);
					break;
			}
			x++;
		}
	}
	printf("\n");
}
