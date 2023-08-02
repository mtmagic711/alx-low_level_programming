#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - insert the node at given point.
* @head: the head of the lists.
* @idx: the index.
* @n: the data.
* Return: the new list.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *tmp;

	ptr = *head;
	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL || *head == NULL)
		return (NULL);
	tmp->n = n;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	else
	{
		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
			if (ptr == NULL)
			{
				free(tmp);
				return (NULL);
			}
		}
	tmp->next = ptr->next;
	ptr->next = tmp;
	}
	return (tmp);
}
