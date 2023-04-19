#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - selecets the correct function to
* perform the operation asked
*
* @s: the operation passed
*
* Return: a pointer to the function
* that corresponds to the operator given prameter
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
return (ops[i].f);
