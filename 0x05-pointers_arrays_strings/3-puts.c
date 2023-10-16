#include "main.h"

/**
 * _puts - This function prints a string followed by a new line
 * @str: The parameter of the function
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar (str[a]);
	_putchar ('\n');

}
