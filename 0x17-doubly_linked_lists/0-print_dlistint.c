#include "lists.h"

/**
* print_dlistint -  prints all the elements of a dlistint_t list.
* @h: the head.
* Return: the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num = 0;

	current = h;
	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}
	return (num);
}
