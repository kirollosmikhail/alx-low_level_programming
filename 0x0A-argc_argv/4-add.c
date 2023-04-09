#include <stdio.h>
#include <stdlib.h>
/**
* main -  a program that adds positive numbers.
*
* @argc: number of arguments
* @argv: Array of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
char *character;
int total = 0;

while (--argc)
{
for (character = argv[argc]; *character; character++)
if (*character < '0' || *character > '9')
return (printf("Error\n"), 1);
total += atoi(argv[argc]);
}
printf("%d\n", total);

return (0);
}
