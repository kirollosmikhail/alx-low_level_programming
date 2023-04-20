#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function that prints strings,
* followed by a new line.
*
* @separator: separator is the string to
*	be printed between the strings
* @n: Number of strings passed to the function.
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list count;
char *s;
unsigned int x;

if (n > 0)
{
	va_start(count, n);
	for (x = 0; x < n - 1; x++)
	{
		s = va_arg(count, char *);
		printf("%s%s", s == NULL ? "(nil)" : s, separator == NULL ? "" : separator);
	}
	s = va_arg(count, char *);
	printf("%s", s == NULL ? "(nil)" : s);
	va_end(count);
}
printf("\n");
}
