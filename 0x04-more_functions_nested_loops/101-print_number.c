#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 * Result: void
 */

void print_number(int n)
{
	unsigned int m1;

	if (n < 0)
	{
		m1 = -n;
		_putchar('-');
	}
	else
	{
		m1 = n;
	}

	if (m1 / 10)
	{
		print_number(m1 / 10);
	}
	_putchar((m1 % 10) + '0');
}
