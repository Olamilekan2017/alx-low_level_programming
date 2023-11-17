#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);

/**
 * add_node_end - This function adds a new node at the end of a list
 * @head: The first parameter of the function
 * @str: The second parameter of the function
 * Return: nee_node at the end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
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
 * create_node - This function creates new nodes
 * @str: This is the only parameter
 * Return: pointer to the new allocated memory
 */

list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * len - This is the length of the string
 * @str: The only parameter
 * Return: length
 */

int len(const char *str)
{
	int total = 0;

	if (str == NULL)
		return (0);

	while (str[total] != '\0')
	{
		total++;
	}
	return (total);
}
