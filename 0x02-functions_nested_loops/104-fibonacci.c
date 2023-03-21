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
		unsigned long int i,fabo = 1,fab = 2,l = 1000000000,fabo1,fabo2,fab1,fab2;


		printf("%lu", fabo);


		for (i = 1; i < 91; i++)
		{
			printf(", %lu", fab);
			fab += fabo;
			fabo = fab - fabo;
		}


		fabo1 = (fabo / l);
		fabo2 = (fabo % l);
		fab1 = (fab / l);
		fab2 = (fab % l);


		for (i = 92; i < 99; ++i)
		{
			printf(", %lu", fab1 + (fab2 / l));
			printf("%lu", fab2 % l);
			fab1 = fab1 + fabo1;
			fabo1 = fab1 - fabo1;
			fab2 = fab2 + fabo2;
			fabo2 = fab2 - fabo2;
		}
		printf("\n");
		return (0);
	}


