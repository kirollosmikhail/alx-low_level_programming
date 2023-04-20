#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 *
 * @format: list of types of arguments
 * passed to the function
 */

void print_all(const char * const format, ...)
{
va_list valist;
char *arg;
unsigned int i = 0, x = 0;

va_start(valist, format);

while (format && format[i])
{
	if (x)
		printf(", ");
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(valist, int));
		break;
	case 'i':
		printf("%i", va_arg(valist, int));
		break;
	case 'f':
		printf("%f", va_arg(valist, double));
		break;
	case 's':
		arg = va_arg(valist, char *);
		if (arg)
		{
			printf("%s", arg);
			break;
		}
		printf("%p", arg);
		break;
	default:
		x = 0;
		i++;
		continue;
	}
	x = 1;
	i++;
}
printf("\n");
va_end(valist);
}
