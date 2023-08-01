#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - eturns the nth node of a list.
* @head: the head of the list.
* @index: the index of the node.
* Return: the node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (index != 0)
	{
		ptr = ptr->next;
		index--;
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
