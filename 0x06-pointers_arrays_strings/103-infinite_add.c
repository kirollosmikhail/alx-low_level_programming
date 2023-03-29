#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int x = 0;
	int y = 0;
	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		temp = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, x = 0, y = 0, num = 0;
	int secondvalue = 0, firstvalue = 0, tempp = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || flow == 1)
	{
		if (x < 0)
			secondvalue = 0;
		else
			secondvalue = *(n1 + x) - '0';
		if (y < 0)
			firstvalue = 0;
		else
			firstvalue = *(n2 + y) - '0';
		tempp = secondvalue + firstvalue + flow;
		if (tempp >= 10)
			flow = 1;
		else
			flow = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (tempp % 10) + '0';
		num++;
		y--;
		x--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
