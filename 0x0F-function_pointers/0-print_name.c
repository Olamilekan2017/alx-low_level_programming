#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - This function prints a name
 * @name: This is the first parameter of the function
 * @f: This is the second parameter of the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
