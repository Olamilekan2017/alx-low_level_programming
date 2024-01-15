#include "main.h"

/**
 * _strspn - This function gets the length of a prefix
 * @s: The first parameter of the function
 * @accept: The second parameter of the function
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int _strspn(char *s, char *accept);
	unsigned int c = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				c++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
