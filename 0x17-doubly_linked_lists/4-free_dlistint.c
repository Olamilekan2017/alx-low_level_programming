#include "lists.h"

/**
 * free_dlistint - This function frees a list
 * @head: The head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
