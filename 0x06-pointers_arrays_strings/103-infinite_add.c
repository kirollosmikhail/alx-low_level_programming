#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int x = 0;
	int n = 0;
	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (n = 0; n < x; n++, x--)
	{
		temp = *(n + n);
		*(n + n) = *(n + x);
		*(n + x) = temp;
	}
}

/**
 * infinite_add -  function that adds two numbers.
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 *
 * @r: pointer to buffer
 * @size_r: buffer size
 *
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, x = 0, n = 0, num = 0;
	int value1 = 0, value2 = 0, temp = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + n) != '\0')
		n++;
	x--;
	n--;
	if (n >= size_r || x >= size_r)
		return (0);
	while (n >= 0 || x >= 0 || over == 1)
	{
		if (x < 0)
			value1 = 0;
		else
			value1 = *(n1 + x) - '0';
		if (n < 0)
			value2 = 0;
		else
			value2 = *(n2 + n) - '0';
		temp = value1 + value2 + over;
		if (temp >= 10)
			over = 1;
		else
			over = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (temp % 10) + '0';
		num++;
		n--;
		x--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
