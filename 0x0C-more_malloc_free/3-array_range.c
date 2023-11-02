#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function creates an array of integer
 * @min: the first parameter of the function
 * @max: The second parameter of the function
 * Return: pointer to a newly created array
 */
int *array_range(int min, int max)
{
	int a, b;
	int *p;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	p = malloc(sizeof(int) * a);
	if (p == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		p[b] = min;
		min++;
	}
	return (p);
}
