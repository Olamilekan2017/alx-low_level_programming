#include "main.h"

/**
 * _strlen_recursion - This function returns the length
 * @s: The only function of the parameter
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
