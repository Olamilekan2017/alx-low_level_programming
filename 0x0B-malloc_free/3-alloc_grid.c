#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer
 * @width: The first parameter of the function
 * @height: The second parameter of the function
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **q;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	q = malloc(height * sizeof(int *));
	if (q == NULL)
	{
		free(q);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		q[a] = malloc(width * sizeof(int *));
		if (q[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(q);
			free(q[a]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)

		for (b = 0; b < width; b++)
			q[a][b] = 0;

	return (q);
}
