#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - This function searches for an integer
 * @array: This is the first function of the parameter
 * @size: This is the second parameter of the function
 * @cmp: This is the third parameter of the function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
