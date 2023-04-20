#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a function that prints numbers,
* followed by a new line
*
* @separator: separator is the string to be printed between numbers
* @n: Int parameter
*
* @...: the int to print
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list count;
unsigned int x;

if (n > 0)
{
	va_start(count, n);

	for (x = 0; x < n - 1; x++)
		printf("%d%s", va_arg(count, int), separator == NULL ? "" : separator);
	printf("%d", va_arg(count, int));
	va_end(count);
}
printf("\n");
}
