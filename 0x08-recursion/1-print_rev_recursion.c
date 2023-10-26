#include "main.h"

/**
 * _print_rev_recursion - This function prints in rev
 * @s: The only parameter of this function
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
