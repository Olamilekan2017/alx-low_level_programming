#include "main.h"
#include <stdio.h>

/**
 * rot13 - This function encodes a string
 * @b: The string parameter
 * Return: b
 */

char *rot13(char *b)
{
	int a;
	int c;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; b[a] != '\0'; a++)
	{
		for (c = 0; c < 52; c++)
		{
			if (b[a] == s1[c])
			{
				b[a] = s2[c];
				break;
			}
		}
	}
	return (b);
}
