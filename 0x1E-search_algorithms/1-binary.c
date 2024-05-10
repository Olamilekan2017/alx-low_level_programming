#include "search_algos.h"

void get_array(int *array, int begin, int end);

/**
 * get_array - Printing elements of array within specific range
 * @array: The pointer
 * @begin: The beginning
 * @end: The end
 * Return: void
 */

void get_array(int *array, int begin, int end)
{
	int index;

	printf("Searching in array: ");
	for (index = begin ; index < end ; index++)
	{
		printf("%d, ", array[index]);
	}
	printf("%d\n", array[index]);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: The pointer
 * @size: The number of elements
 * @value: The searching value
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int begin;
	int middle;
	int end;

	if (!array)
		return (-1);
	begin = 0;
	end = size - 1;
	while (begin <= end)
	{
		get_array(array, begin, end);
		middle = (begin + end) / 2;
		if (array[middle] > value)
			end = middle - 1;
		else if (array[middle] < value)
			begin = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
