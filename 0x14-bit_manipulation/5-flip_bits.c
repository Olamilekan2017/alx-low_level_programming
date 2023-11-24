#include "main.h"

/**
 * flip_bits - This function returns fhe number iof bits you would need to flip
 * @n: The first parameter
 * @m: The second parameter
 * Return: numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned long int total;

	res = n ^ m;
	for (total = 0; res > 0;)
	{
		if ((res & 1) == 1)
			total++;
		res = res >> 1;
	}
	return (total);
}
