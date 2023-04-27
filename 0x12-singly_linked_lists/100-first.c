#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) fsent(void);

/**
 * fsent - Print statement within this and before running the main
 */

void fsent(void)
{
printf("You're beat! and yet, you must allow,\n"
       "I bore my house upon my back!\n");
}
