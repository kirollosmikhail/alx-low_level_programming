#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
* main - print the result of simple operations.
* @argc: The number of arguments passed to the program.
* @argv: array of pointers passed to the arguments.
*
* Return: 0.
*/
int main(int argc, char **argv)
{
int number1, number2;
char operator;

int (*calc)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

operator = *argv[2];
number1 = atoi(argv[1]);
number2 = atoi(argv[3]);

if ((strlen(argv[2]) != 1) || (operator != '+' && operator != '-' &&
	operator != '*' && operator != '/'
	&& operator != '%'))
{
	printf("Error\n");
	exit(99);
}

if ((operator == '/' || operator == '%') && number2 == 0)
{
	printf("Error\n");
	exit(100);
}

calc = get_op_func(argv[2]);
printf("%d\n", calc(number1, number2));
return (0);
}
