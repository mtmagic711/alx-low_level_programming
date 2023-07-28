#include "lists.h"
/**
* add_node - adds a new node at the beginning of a list.
* @head: double pointer to the head of the list.
* @str: string to be added to the list.
* Return: address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
