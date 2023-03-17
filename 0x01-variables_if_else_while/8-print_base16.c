#include <stdio.h>

/**
 * main - Entry point  prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char hex;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
