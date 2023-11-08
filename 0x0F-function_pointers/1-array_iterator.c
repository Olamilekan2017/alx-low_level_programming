#include "function_pointers.h"

/**
 * array_iterator - This function gives a parameter on each element of an array
 * @array: This is the first parameter of the function
 * @size: This is the second parameter of the function
 * @action: This is the third parameter of the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array == NULL || action == NULL)
		return;
	for (c = 0; c < size; c++)
	{
		(*action)(*array);
		array++;
	}
}
