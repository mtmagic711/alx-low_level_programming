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
	idx--;
	while (idx != 0)
	{
		ptr = ptr->next;
		idx--;
		if (ptr == NULL)
			return (NULL);
	}
	tmp->next = ptr->next;
	ptr->next = tmp;
	return (tmp);
}
