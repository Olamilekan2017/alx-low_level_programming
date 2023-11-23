#include "main.h"
void print_bin(unsigned long int n);

/**
 * print_bin - This is my other function
 * @n: The only oarameter
 * Return: void
 */

void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - This function prints binary representation of a number
 * @n: The only parameter
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bin(n);
	}
}
