#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - that a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Return pointer should point to a newly allocated space in memory
 * if null is passed,
 * treat it as an empty string NULL if return null is failure
 */
char *str_concat(char *s1, char *s2)
{
int num1 = 0, num2 = 0, num3 = 0;
unsigned int i;
char *strnew = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[num1] != '\0'; num1++)
	;
	for (; s2[num2] != '\0'; num2++)
	;
	strnew = (char *)malloc((num1 + num2 + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strnew[i] = s1[i];
	for (; s2[num3] != '\0'; i++)
	{
		strnew[i] = s2[num3];
		num3++;
	}
	return (strnew);
}

