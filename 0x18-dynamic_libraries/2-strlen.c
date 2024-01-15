#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s: The parameter of the function
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;
	int total = 0;

	for (a = 0; s[a] != '\0'; a++)
		total++;

	return (total);
}
