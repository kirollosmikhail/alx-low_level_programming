#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup -  function returns a pointer to a new string
 * which is a duplicate of the string,
 * Memory for the new string
 *
 * @str: character
 *
 * Return: Return Always 0 (Success)
 */
char *_strdup(char *str)
{
int i;
int j = 0;
char *x;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
	return (NULL);
	for (j = 0; str[j]; j++)
	x[j] = str[j];
return (x);
}
