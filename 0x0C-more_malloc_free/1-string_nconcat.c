#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings
 * @s1: The first parameter of the function
 * @s2: The second parameter of the function
 * @n: The third parameter of the function
 * Return: pointer to a newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *p;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}

	if (b > n)
		b = n;
	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		p[c] = s1[c];
	for (c = 0; c < b; c++)
		p[c + a] = s2[c];
	p[a + b] = '\0';
	return (p);
}
