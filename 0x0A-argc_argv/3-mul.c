#include <stdio.h>
#include "main.h"

/**
* _atoi - converts a string to an integer

* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{

int i = 0;
int j = 0;
int n = 0;
int larr = 0;
int x = 0;
int num = 0;

while (s[larr] != '\0')
larr++;

while (i < larr && x == 0)
{
if (s[i] == '-')
++j;

if (s[i] >= '0' && s[i] <= '9')
{
num = s[i] - '0';
if (j % 2)
    num = -num;
n = n * 10 + num;
x = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
    break;
x = 0;
}
i++;
}

if (x == 0)
return (0);

return (n);
}

/**
* main -  a program that multiplies two numbers.
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: if Return 0 (Success) else (Error)
*/
int main(int argc, char *argv[])
{
int num0, num1, answer;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num0 = _atoi(argv[1]);
num1 = _atoi(argv[2]);
answer = num0 * num1;

printf("%d\n", answer);

return (0);
}

