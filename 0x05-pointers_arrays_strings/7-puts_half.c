#include "main.h"

/**
 * puts_half - This function prints half of a string
 * @str: This is the parameter of the function
 */
void puts_half(char *str)
{
	int a;
	int b;
	int total = 0;

	for (a = 0; str[a] != '\0'; a++)
		total++;
	b = (total - 1) / 2;

	for (a = b + 1; str[a] != '\0'; a++)
	{
		_putchar (str[a]);
	}
	_putchar ('\n');
}
