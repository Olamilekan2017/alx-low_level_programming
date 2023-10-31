#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars
 * @size: The first parameter of the function
 * @c: The second parameter of the funtion
 * Return: pointer to the char c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}
	return (p);
}
