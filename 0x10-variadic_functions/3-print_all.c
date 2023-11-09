#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - This function prints anything
 * @format: The only parameter of the function
 */
void print_all(const char * const format, ...)
{
	int a, i;
	char *c;

	va_list p;

	va_start(p, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(p, int));
				i = 0;
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				i = 0;
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				i = 0;
				break;
			case 's':
				c = va_arg(p, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s", c);
				i = 0;
				break;
			default:
				i = 1;
				break;
		}
		if (format[a + 1] != '\0' && i == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(p);
}
