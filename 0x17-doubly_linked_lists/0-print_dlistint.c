#include "lists.h"

/**
 * print_dlistint - This function prints all the element
 * @h: The pointer to the list
 * Return: Total
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
