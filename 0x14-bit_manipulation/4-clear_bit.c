#include "main.h"

/**
 * clear_bit - This function sets the value if a but to 0
 * @n: The first parameter
 * @index: The second parameter
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	i = i << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index & 1)) == 1)
		*n = i ^ *n;

	return (1);
}
