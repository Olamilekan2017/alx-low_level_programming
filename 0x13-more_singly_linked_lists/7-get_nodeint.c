#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node
 * @head: The pointer
 * @index: The index
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
