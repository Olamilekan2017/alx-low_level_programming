#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: This is the only parameter of the function
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
