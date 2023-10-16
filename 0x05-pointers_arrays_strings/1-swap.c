#include "main.h"

/**
 * swap_int - This function swaps the values of two integers
 * @a: The first parameter of the function
 * @b: The second parameter of the function
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;

}
