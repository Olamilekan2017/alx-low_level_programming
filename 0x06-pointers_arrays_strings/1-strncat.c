#include "main.h"

/**
 * _strncat - This function also concatenates two strings
 * @dest: The first parameter of the function
 * @src: The second parameter of the function
 * @n: The third parameter of the function
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
