#include <stdio.h>
#include <math.h>

/**
 * main - Entry point that finds and prints the largest prime factor
 *                  of the number 612852475143
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num, maxnum, loop;

	num = 612852475143;
	maxnum = -1;

	while (num % 2 == 0)
	{
		maxnum = 2;
		num /= 2;
	}

	for (loop = 3; loop <= sqrt(num); loop = loop + 2)
	{
		while (num % loop == 0)
		{
			maxnum = loop;
			num = num / loop;
		}
	}

	if (num > 2)
		maxnum = num;

	printf("%ld\n", maxnum);

	return (0);
}
