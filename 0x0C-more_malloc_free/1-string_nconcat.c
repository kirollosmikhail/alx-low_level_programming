#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked -  a function that allocates memory using malloc
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: returned pointer shall point to a newly allocated space in memory,
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
char *str = NULL;
unsigned int i, l, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (l = 0; s1[l] != '\0'; l++)
	{
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
	}
	if (k > n)
		k = n;
		str = malloc((l + k + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l + k; i++)
	{
		if (i < l)
		str[i] = s1[i];
	else
		str[i] = s2[i - l];
	}
str[i] = '\0';
return (str);
}
