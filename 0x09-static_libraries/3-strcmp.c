#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: The first parameter of the function
 * @s2: The second parameter of the function
 * Return: s1, s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
