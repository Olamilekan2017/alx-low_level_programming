#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a list
 * @h: The pointer
 * Return: Total
 */

size_t listint_len(const listint_t *h)
{
	unsigned int total = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
