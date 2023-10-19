#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers
 * @a: The first parameter of the function
 * @n: The second parameter of the function
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
