#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a list.
* @head: the head of the list.
* Return: Always 0.
*/

void free_listint(listint_t *head)
{
	listint_t tmp;

	tmp = head;
	while (tmp->next != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
