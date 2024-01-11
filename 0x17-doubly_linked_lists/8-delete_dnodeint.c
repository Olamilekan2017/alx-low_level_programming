#include "lists.h"
/**
 * delete_dnodeint_at_index - This function deletes the node at index
 * @head: The head pointer
 * @index: The index
 * Return: -1 or 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int current_idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		dlistint_t *temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	current = *head;
	while (current != NULL && current_idx < index)
	{
		current = current->next;
		current_idx++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
