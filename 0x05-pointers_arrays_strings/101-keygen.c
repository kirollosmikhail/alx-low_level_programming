#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - that program generates random valid
 * passwords for 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;

	srand(time(NULL));
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);
	return (0);
}
