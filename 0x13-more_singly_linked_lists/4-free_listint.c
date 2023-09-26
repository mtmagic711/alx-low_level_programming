#include "lists.h"

/**
* free_listint -  frees a listint_t list.
* @head: the head of a the list
* Return: Always 0.
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
