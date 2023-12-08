#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: the head.
* Return: Always 0.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *next;

	start = head;

	while (start)
	{
		next = start->next;
		free(start);
		start = next;
	}
}
