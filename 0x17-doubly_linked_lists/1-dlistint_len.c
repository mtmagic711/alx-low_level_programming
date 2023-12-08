#include "lists.h"

/**
* dlistint_len -  returns the number of elements in a list
* @h: the head.
* Return:  returns the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	if (h == NULL)
		return (0);
	current = h;
	while (current)
	{
		num++;
		current = current->next;
	}
	return (num);
}
