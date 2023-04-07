#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name
 * followed by a new line.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Return Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}
