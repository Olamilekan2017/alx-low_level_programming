#include "lists.h"

/**
 * list_len - This function returns the number of elements
 * @h: The only parameter of the function
 * Return: total
 */

size_t list_len(const list_t *h)
{
	int total = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
