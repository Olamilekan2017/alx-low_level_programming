#include "main.h"

/**
 * binary_to_uint - This function converts a binary to an unsigned int
 * @b: The only parameter
 * Return: Decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int pow = 1;
	unsigned int i = 0;
	unsigned int c = 0;
	unsigned int len;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (c = len - 1; c > 0; c--)
		pow = pow * base;
		sum += (pow * (b[i] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
