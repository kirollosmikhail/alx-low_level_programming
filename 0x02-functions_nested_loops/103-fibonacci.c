#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int x, k, next, sum;

	x = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (x < 4000000 && (x % 2) == 0)
		{
			sum = sum + x;
		}
		next = x + k;
		x = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
