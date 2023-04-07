#include "main.h"

/**
 * _atoi - that  function that convert a string to an integer.
 *
 * @s: string to be convert
 *
 * Return: the int (num) convert from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int num = 0;
	int x = 0;
	int y = 0;
	int num1 = 0;

	while (s[x] != '\0')
		x++;

	while (i < x && y == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num1 = s[i] - '0';
			if (j % 2)
				num1 = -num1;
			num = num * 10 + num1;
			y = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			y = 0;
		}
		i++;
	}

	if (y == 0)
		return (0);

	return (num);
}
