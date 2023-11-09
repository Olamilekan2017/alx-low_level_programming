#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum
 * @n: The only given parameter of the function
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	unsigned int sum = 0;

	va_list p;

	va_start(p, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(p, const unsigned int);
	}
	va_end(p);
	return (sum);
}
