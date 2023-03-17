#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print alphabet in lowercase
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar (alphabet);
	}
	putchar('\n');
	return (0);
}
