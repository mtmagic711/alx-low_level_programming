#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: the head.
* @index: the index of the node.
* Return: the new node, or NULL.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;

	curr = head;

	while (index > 0 && curr)
	{
		index--;
		curr = curr->next;
	}
	return (curr);
}
