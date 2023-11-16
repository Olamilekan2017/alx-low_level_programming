#include "lists.h"
int len(const char *str);

/**
 * add_node - This function adds a new node at the beginning of a list
 * @head: The first parameter of the function
 * @str: The second parameter of the function
 * Return: new node at the beginning of a list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;
	return (*head);
}

/**
 * len - This is the length function
 * @str: This is the only parameter of the function
 * Return: lenth
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
