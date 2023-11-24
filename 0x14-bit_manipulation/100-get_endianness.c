#include "main.h"

/**
 * get_endianness - This finction checks the endianness
 * Return: 0
 */

int get_endianness(void)
{
	int x = 1;
	int l_or_b;

	l_or_b = (int) (((char *)&x)[0]);
	return (l_or_b);
}
