#include "main.h"

/**
 * _strcpy - This function copies the string pointed to by src
 * @dest: The first parameter of the function
 * @src: The second parameter of the function
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
