#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a list.
* @head: the head.
* @n: the data.
* Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);
	current->next = NULL;
	current->prev = NULL;
	current->n = n;
	if (head == NULL)
	{
		*head = current;
		return (current);
	}
	current->next = *head;
	*head = current;
	return (current);
}
