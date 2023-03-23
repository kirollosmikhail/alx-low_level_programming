#include "main.h"
#include <stdio.h>

/**
 *_isdigit - check if range of the  numbers are 0 - 9 true or false
 *@c: char to check
 * Return: 0 if false and 1 if true
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
