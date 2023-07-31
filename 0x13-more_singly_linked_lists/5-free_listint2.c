#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a list.
* @head: the head of the list.
* Return: Always 0.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
