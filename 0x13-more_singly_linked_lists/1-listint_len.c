#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* listint_len - returns the number of elements
* @h: the head.
* Return: returns the number of elements.
*/

size_t listint_len(const listint_t *h)
{
	size_t cmpt = 0;

	while (h != NULL)
	{
		cmpt++;
		h = h->next;
	}
	return (cmpt);
}
