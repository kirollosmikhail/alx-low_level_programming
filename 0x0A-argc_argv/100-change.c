#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints
* the minimum number of coins to make change for
* an amount of money.
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Return Always 0 (Success), Else 1
*/

int main(int argc, char *argv[])
{
int x, y, final;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

x = atoi(argv[1]);
final = 0;

if (x < 0)
{
printf("0\n");
return (0);
}

for (y = 0; y < 5 && x >= 0; y++)
{
while (x >= coins[y])
{
final++;
x -= coins[y];
}
}

printf("%d\n", final);
return (0);
}
