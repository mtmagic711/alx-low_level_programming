#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a list.
* @head: the head.
* @n: the data.
* Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *temp;

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
	temp = *head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = current;
	current->prev = temp;
	return (current); 
}
