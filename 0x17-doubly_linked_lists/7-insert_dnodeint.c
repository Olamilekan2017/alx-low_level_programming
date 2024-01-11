#include "lists.h"
listint_t *create_new_node(int n);
/**
 * create_new_node - This is the new node function
 * @n: The only parameter
 * Return: pointer
 */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - This function inserts a new node
 * @h: The head pointer
 * @idx: The index
 * @n: The integer
 * Return: pointer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *tmp_o;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
		*head = new_node;
	while (i < idx - 1 && tmp != NULL && idx != 0)
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp;
	else
	{
		tmp_o = tmp->next;
		tmp->next = new_node;
		new_node->next = tmp_o;
	}
	return (new_node);
}	
