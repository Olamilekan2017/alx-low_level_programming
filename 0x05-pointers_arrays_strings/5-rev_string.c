#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: The parameter of the function
 */

void rev_string(char *s)
{
	int a;
	int total = 0;

	for (a = 0; s[a] != '\0'; a++)
		total++;

	for (a = 0; a < total / 2; a++)
	{
		char i;

		i = s[a];
		s[a] = s[total - 1 - a];
		s[total - 1 - a] = i;
	}

}
