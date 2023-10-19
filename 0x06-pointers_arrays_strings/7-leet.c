#include "main.h"
#include <stdio.h>

/**
 * leet - This is the main function
 * @b: The parameter of the function
 * Return: b
 */

char *leet(char *b)
{
	int a, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; b[a] != '\0'; a++)
	{
		for (c = 0; c < 10; c++)
		{
			if (b[a] == s1[c])
			{
				b[a] = s2[c];
			}
		}
	}
	return (b);
}
