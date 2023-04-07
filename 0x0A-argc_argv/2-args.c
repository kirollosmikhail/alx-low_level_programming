#include <stdio.h>

/**
 * main - a program that prints
 * all arguments it receives.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Return Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int x;

for (x = 1; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
