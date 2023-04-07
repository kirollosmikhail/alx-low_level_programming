#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check - string there are digit
* @str: array str
*
* Return: Always 0 (Success)
*/
int check_num(char *str)
{
int counter = 0;

while (counter < strlen(str))
{
if (!isdigit(str[counter]))
{
return (0);
}

counter++;
}
return (1);
}

/**
* main - a program that adds positive numbers.
*
* @argc: Counter arguments
* @argv: Arguments
*
* Return: Return Always 0 (Success)
*/
int main(int argc, char *argv[])

{
int counter, x, totalsum = 0;

counter = 1;
while (counter < argc)
{
if (check_num(argv[counter]))

{
x = atoi(argv[counter]);
totalsum += x;
}

else
{
printf("Error\n");
return (1);
}

counter++;
}

printf("%d\n", totalsum);

return (0);
}
