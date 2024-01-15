#include "main.h"

/**
 * _strchr - This function locates a character
 * @s: The first parameter of the function
 * @c: The second parameter of the function
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (0);
}
