#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - deletes the head of a node.
* @head: the head of the list.
* Return: the node data.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = temp->n;
	if (*head == NULL)
		return (0);
	temp = temp->next;
	free(*head);
	*head = temp;
	return (n);
}
