#include "main.h"

/**
 * print_rev - This function prints a string in reverse followed by a new line
 * @s: The parameter of the function
 */

void print_rev(char *s)
{
	int a;
	int total = 0;

	for (a = 0; s[a] != '\0'; a++)
		total++;

	for (a = total - 1; a >= 0; a--)
	{
		_putchar (s[a]);
	}
	_putchar ('\n');
}
