#include "main.h"
#include <stdio.h>

/**
 *_isupper - uppercase letters
 *@c: char to check it is C or c
 *Return: 0 or 1 if C return 1 else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
