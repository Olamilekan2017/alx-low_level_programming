#include "lists.h"

/**
 * sum_dlistint - This function returns summ of all the data in a list
 * @head: The head pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
