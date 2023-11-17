#include <stdio.h>
void Tortoise(void) __attribute__ ((constructor));

/**
 * Tortoise - This function prints a str
 */

void Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
