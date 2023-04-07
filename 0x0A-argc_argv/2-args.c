#include <stdio.h>
#include "main.h"

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
int x = 0;

if (argc > 0)
while (x < argc)
{
printf("%s\n", argv[x]);
x++
}
return (0);
}
