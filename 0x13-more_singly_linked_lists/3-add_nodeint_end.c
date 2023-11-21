#include "lists.h"
listint_t *create_node(const int n);

/**
 * add_nodeint_end - This function adds a new node
 * @head: The first parameter
 * @n: The second parameter
 * Return: New node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}

/**
 * create_node - This function creates new node
 * @n: This is the only parameter
 * Return: pointer
 */

listint_t *create_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

