#include <stdlib.h>
#include <stdio.h>

/**
* main - a program that prints the opcodes of its own main function.
* @argc: numbers of arguments passed
* @argv: array of arguments passed in commandline
*
* Return: Return Always 0 (Success)
*/
int main(int argc, char *argv[])
{
char *arr;
int b, x;

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
b = atoi(argv[1]);

if (b < 0)
{
	printf("Error\n");
	exit(2);
}
arr = (char *)main;


for (x = 0; x < b; x++)
{
	if (x == b - 1)
	{
	printf("%02hhx\n", arr[x]);
	break;
	}
printf("%02hhx ", arr[x]);
}
return (0);
}
