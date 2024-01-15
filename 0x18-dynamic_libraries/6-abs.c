#include "main.h"

/**
 * _abs - this function computes the absolute value of an integer
 * @c: the number computed
 * Return: Absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
