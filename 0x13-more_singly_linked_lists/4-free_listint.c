#include "lists.h"

/**
 * free_listint - This function frees a list
 * @head: The pointer
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
