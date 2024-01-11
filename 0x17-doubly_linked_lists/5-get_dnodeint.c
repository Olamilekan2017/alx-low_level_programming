#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the nth node of a list
 * @head: The head pointer
 * @index: The index
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		i++;
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
