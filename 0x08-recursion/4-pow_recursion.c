#include "main.h"

/**
 * _pow_recursion - This function returns the value of x
 * @x: The first parameter of the function
 * @y: The second parameter if the function
 * Return: value of a given number passed to the function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
