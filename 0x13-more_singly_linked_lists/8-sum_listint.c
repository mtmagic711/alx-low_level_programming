#include "lists.h"
#include <stdlib.h>

/**
* sum_listint - the sum of all nodes.
* @head: the head of the list.
* Return: the sum of the list.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	if (head == NULL)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
