#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: the head.
* @idx: the index of the new node.
* @n: the data.
* Return:  the address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
