#include "lists.h"

/**
 * reverse_listint - This function reverses a list
 * @head: The pointer
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *n_tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;

	while (*head != NULL)
	{
		n_tmp = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		if (n_tmp == NULL)
			return (*head);
		*head = n_tmp;
	}
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	return (NULL);
}
