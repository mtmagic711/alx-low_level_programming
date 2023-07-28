#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list.
* @h: pointer to the head.
* Return: the size.
*/

size_t print_list(const list_t *h)
{
size_t cmpt = 0;

while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	cmpt++;
	h = h->next;
}
return (cmpt);
}
