#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description using loop
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your ccode goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
