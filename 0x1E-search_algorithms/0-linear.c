#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: The pointer
 * @size: The number of elements
 * @value: The searching value
 * Return: first index
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
