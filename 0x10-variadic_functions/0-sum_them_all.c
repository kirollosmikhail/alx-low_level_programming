#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
*
* @n: arguments
*
* Return: the total of all its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list add;	
int total = 0;
unsigned int x;

va_start(add, n);

for (x = 0; x < n; x++)
	total += va_arg(add, int);
va_end(add);
return (total);
}
