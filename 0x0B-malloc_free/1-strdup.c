#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space
 * @str: The only parameter of the function
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	p = malloc(sizeof(char) * (a + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		p[b] = str[b];
	}
	return (p);
}
