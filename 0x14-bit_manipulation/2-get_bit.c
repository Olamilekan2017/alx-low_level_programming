#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index
 * @n: The first parameter
 * @index: The second oarameter
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
