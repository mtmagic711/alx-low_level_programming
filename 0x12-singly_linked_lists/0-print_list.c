#include "lists.h"

/**
* print_list -  prints all the elements of a list_t list.
* @h: the list.
* Return: the number of elements.
*/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t cmp = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", temp->len, temp->str);
	cmp++;
	temp = temp->next;
	}
	return (cmp);
}
