#include "lists.h"

/**
 * print_listint - This function prints all the element
 * @h: The pointer to the list
 * Return: Total
 */

size_t print_listint(const listint_t *h)
{
	unsigned int total = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		total++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (total);
}
