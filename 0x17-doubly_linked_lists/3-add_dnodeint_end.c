#include "lists.h"

/**
 * add_dnodeint_end - This function adds a new node at the end
 * @head: The head pointer
 * @n: The integer
 * Return: New node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new_node->prev = tmp;
		tmp->next = new_node;
	}
	return (new_node);
}
