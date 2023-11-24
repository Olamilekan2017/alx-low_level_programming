#include "main.h"

/**
 * set_bit - Thsi function sets the balue if a bit into 1 at a given index
 * @n: The firat parameter
 * @index: The second parameter
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
