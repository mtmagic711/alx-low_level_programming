#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - delete node at index.
* @head: the head of the list.
* @index: the index.
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = *head;
	if (*head == NULL)
		return(-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	else
	{
		while (index != 0)
		{
			tmp = ptr;
			ptr = ptr->next;
			index--;
			if (ptr == NULL)
				return(-1);
		}
		tmp->next = ptr->next;
		free(ptr);
		return (1);
	}
}
