#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n)
* @head: the head.
* Return: the sum or 0.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
