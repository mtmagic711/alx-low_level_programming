#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a list.
* @h: the head of a the list
* @n: the data to add.
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
