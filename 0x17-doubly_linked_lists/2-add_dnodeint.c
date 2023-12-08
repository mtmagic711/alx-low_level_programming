#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a list.
* @head: the head.
* @n: the data.
* Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
	new_node->next = *head;

	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
