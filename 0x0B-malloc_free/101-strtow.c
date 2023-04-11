#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* wordcnt - a function to help to calculate
* the number in string
*
* @s: string to count
*
* Return: int of number
*/
int wordcnt(char *s)
{
int x = 0, y, z = 0;

for (y = 0; s[y] != '\0'; y++)
{
	if (s[y] == ' ')
	x = 0;
	else if (x == 0)
	{
	x = 1;
	z++;
	}
}

return (z);
}
/**
* **strtow - a function that
* splits a string into words
*
* @str: is a string to split
*
* Return: pointer to an array of strings!
*
*/
char **strtow(char *str)
{
char **ptr, *T;
int j, q = 0, num = 0, wcnt, y = 0, start, end;

while (*(str + num))
	num++;
	wcnt = wordcnt(str);
if (wcnt == 0)
return (NULL);

ptr = (char **) malloc(sizeof(char *) * (wcnt + 1));
if (ptr == NULL)
return (NULL);
for (j = 0; j <= num; j++)
{
	if (str[j] == ' ' || str[j] == '\0')
{
	if (y)
	{
	end = j;
	T = (char *) malloc(sizeof(char) * (y + 1));
	if (T == NULL)
	return (NULL);
	while (start < end)
	*T++ = str[start++];
	*T = '\0';
	ptr[q] = T - y;
	q++;
	y = 0;
	}
}
else if (y++ == 0)
start = j;
}
ptr[q] = NULL;
return (ptr);
}

