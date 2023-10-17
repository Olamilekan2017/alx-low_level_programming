#include "main.h"

/**
 * print_array - This function prints n elements of an array
 * @a: The function first parameter
 * @n: The function second parameter
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
			printf("\n");
	}
	printf("\n");
}
