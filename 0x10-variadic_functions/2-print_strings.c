#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - This function prints strings
 * @separator: The first parameter of the finction
 * @n: The second parameter of the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *c;

	va_list p;

	va_start(p, n);

	for (a = 0; a < n; a++)
	{
		c = va_arg(p, char *);

		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
