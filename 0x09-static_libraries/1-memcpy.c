#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @dest: The first parameter of the function
 * @src: The second parameter of the function
 * @n: The third parameter of the function
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
