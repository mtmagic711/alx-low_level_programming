#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning.
* @head: the head of the lists.
* @n: the integer.
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = NULL;
	current = (listint_t *)malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->next = *head;
	*head = current;
	current->n = n;
	return (*head);
}
