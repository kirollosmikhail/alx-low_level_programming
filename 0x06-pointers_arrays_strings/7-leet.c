#include "main.h"
/**
 * leet -  function that encodes a string into 1337.
 *
 * @n: input
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char char1[] = "aAeEoOtTlL";
	char char2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == char1[j])
			{
				n[i] = char2[j];
			}
		}
	}
	return (n);
}
