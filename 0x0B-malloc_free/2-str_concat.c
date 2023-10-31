#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This function concantenates two strings
 * @s1: The first parameter of the function
 * @s2: The second parameter of the function
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, a, b;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; b <= len2; b++)
	{
		p[a] = s2[b];
		a++;
	}
	return (p);
}
