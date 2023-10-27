#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: The first parameter of the function
 * @src: The second parameter of the function
 * @n: The third parameter of the function
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
