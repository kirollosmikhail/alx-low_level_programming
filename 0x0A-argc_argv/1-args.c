#include <stdio.h>

/**
 * main - a program that prints
 * the number of arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Return Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*unused argv void to ignore*/
	printf("%d\n", argc - 1);

	return (0);
}

