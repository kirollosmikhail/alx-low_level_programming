#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @s: pointer
 *
 * Return: pointer *s
 */

char *rot13(char *s)
{
	int x;
	int i;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[x] == data1[i])
			{
				s[x] = datarot[i];
				break;
			}
		}
	}
	return (s);
}
