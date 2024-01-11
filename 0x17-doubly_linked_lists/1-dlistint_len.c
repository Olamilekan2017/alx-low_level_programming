#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements
 * @h: The head pointer
 * Return: Total
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
