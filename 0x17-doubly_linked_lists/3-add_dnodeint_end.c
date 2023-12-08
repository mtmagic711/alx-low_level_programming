#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a list.
* @head: the head.
* @n: the data.
* Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	curr = *head;

	while (curr->next)
		curr = curr->next;

	curr->next = new_node;
	new_node->prev = curr;

	return (new_node);
}
