#include "lists.h"

/**
 * print_list - This function prints all the the elements of a lists_t
 * @h: The pointer to the list
 * Return: total
 */

size_t print_list(const list_t *h)
{
	unsigned int total = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		total++;
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (total);
}
