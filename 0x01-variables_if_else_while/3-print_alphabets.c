#include <stdio.h>

/**
 * main - Entry point that  prints the alphabet in lowercase and uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(ch);
	putchar('\n');
	return (0);
}
