#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - This funtion prints numbers
 * @separator: This is the first parameter of the function
 * @n: This is the second parameter of the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, c;

	va_list p;

	va_start(p, n);

	for (a = 0; a < n; a++)
	{
		c = va_arg(p, const unsigned int);
		printf("%d", c);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
