#include "main.h"

/**
 * _strpbrk - This function searches a string
 * @s: The first parameter of the function
 * @accept: The second parameter of tge function
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[a] == accept[c])
				return (s + a);
		}
	}
	return (0);
}
