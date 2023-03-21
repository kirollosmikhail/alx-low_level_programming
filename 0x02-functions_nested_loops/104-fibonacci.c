#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Description: prints the first 98 fibonacci numbers
 * starting with 1 and 2 follow by new line
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i,fa = 1,fa = 2,mx = 1000000000,fab,bef2,fa1,fa2;

	printf("%lu", fa);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", fa);
		fa += fa;
		fa = fa - fa;
	}

	fab = (fa / mx);
	bef2 = (fa % mx);
	fa1 = (fa / mx);
	fa2 = (fa % mx);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", fa1 + (fa2 / mx));
		printf("%lu", fa2 % mx);
		fa1 = fa1 + fab;
		fab = fa1 - fab;
		fa2 = fa2 + bef2;
		bef2 = fa2 - bef2;
	}
	printf("\n");
	return (0);
}
