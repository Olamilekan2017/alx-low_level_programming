#include "main.h"

/**
 * print_diagsums - This function prints the sum
 * @a: The first parameter of the function
 * @size: The second parameter of the function
 */

void print_diagsums(int *a, int size)
{
	int total1 = 0;
	int total2 = 0;
	int c;

	for (c = 0; c < size; c++)
	{
		total1 = total1 + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		total2 += a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", total1, total2);
}
