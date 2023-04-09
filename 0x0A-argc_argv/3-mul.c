#include <stdio.h>
#include <stdlib.h>

/**
* main -  a program that multiplies two numbers.
*
* @argc: number of arguments commandline
* @argv: array of arguments commandline
*
* Return: if Return 0 (Success) else (Error)
*/

int main(int argc, char *argv[])
{
int total;

if (argc == 3)
{
total = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", total);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
