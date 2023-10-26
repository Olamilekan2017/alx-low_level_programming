#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - This finction returns natural square root
 * @n: The only parameter of the function
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - This recurses to find the natural
 * @n: The number to calculate sqrt
 * @i: iterator
 * Return: The resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
