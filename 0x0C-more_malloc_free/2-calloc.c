#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This function allocates memory for an array
 * @nmemb: The first parameter of the function
 * @size: The second parameter of the function
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;
	return (p);
}
