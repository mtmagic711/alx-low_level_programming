#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - adds a new node at the end.
* @head: the head of the the list.
* @n: the data.
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *tmp;

	tmp = *head;
	current = (listint_t *)malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->next = NULL;
	current->n = n;
	if (*head == NULL)
		*head = current;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = current;
	}
	return (current);
}
