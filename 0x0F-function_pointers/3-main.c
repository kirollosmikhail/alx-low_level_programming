#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print the result of simple operations.
* @argc: The number of arguments passed to the program.
* @argv: array of pointers passed to the arguments.
*
* Return: 0.
*/

int main(int argc, char **argv)
{
char opr;
int firstnumber, secondnumber;
int (*calc)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

opr = *argv[2];
firstnumber = atoi(argv[1]);
secondnumber = atoi(argv[3]);

if ((strlen(argv[2]) != 1) || (opr != '+' && opr != '-' &&
			opr != '*' && opr != '/'
			&& opr != '%'))
{
	printf("Error\n");
	exit(99);
}

if ((opr == '/' || opr == '%') && secondnumber == 0)
{
	printf("Error\n");
	exit(100);
}

calc = get_op_func(argv[2]);
printf("%d\n", calc(firstnumber, secondnumber));
return (0);
