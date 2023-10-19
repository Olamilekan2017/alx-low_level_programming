#include "main.h"

/**
 * string_toupper - This function changes all lowercase letter to uppercase
 * @b: String input
 * Return: dest
 */

char *string_toupper(char *b)
{
	int a = 0;

	while (b[a] != '\0')
	{
		if (b[a] >= 'a' && b[a] <= 'z')
			b[a] = b[a] - 32;
		a++;
	}
	return (b);
}
