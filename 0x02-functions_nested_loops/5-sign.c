#include "main.h"

/**
 * print_sign - this function print sign of a number
 * @n: this print a sign of a number
 * Return: 1 for all
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(12);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
