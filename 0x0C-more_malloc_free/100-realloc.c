#include "main.h"
#include <stdlib.h>

/**
 * _realloc - This function reallocates a memory block using malloc and free
 * @ptr: The first parameter
 * @old_size: The second parameter
 * @new_size: The third parameter
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, b = new_size;
	char *p;
	char *q = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		b = old_size;
	for (a = 0; a < b; a++)
		p[a] = q[a];
			free(ptr);
	return (p);
}
