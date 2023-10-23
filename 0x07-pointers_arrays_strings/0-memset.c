#include "main.h"

/**
 * _memset - This function fills memory
 * @s: The first parameter of the function
 * @b: The second parameter of the function
 * @n: The third parameter of the function
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
