#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - a function that concatenates all the arguments of your program.
*
* @ac: input
* @av: array with double pointer
*
* Return: NULL if ac == 0, av == NULL
* else Returns s.
* Each argument should be followed by a newline
*/

char *argstostr(int ac, char **av)
{
int counter = 0, x = 0, y = 0;
char *s = NULL;

if (ac == 0 || av == NULL)
	return (NULL);

for (ac = 0; av[ac] != NULL; ac++)
{
	for (x = 0; av[ac][x] != '\0'; x++)
		counter++;
counter++;
}
counter++;
s = malloc(counter);

if (s == NULL)
	return (NULL);
for (ac = 0; av[ac] != NULL; ac++)
{
	for (x = 0; av[ac][x] != '\0'; x++)
	{
	s[y] = av[ac][x];
		y++;
	}
	s[y] = '\n';
	y++;
	}
s[y] = '\0';
return (s);
}
