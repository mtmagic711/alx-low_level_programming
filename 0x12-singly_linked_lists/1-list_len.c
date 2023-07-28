#include "lists.h"

/**
* list_len - list lenght.
* @h: a pinter to the head.
* Return: The lenght.
*/

size_t list_len(const list_t *h)
{
	size_t cmpt = 0;

	while (h)
	{
		cmpt++;
		h = h->next;
	}
	return (cmpt);
}
