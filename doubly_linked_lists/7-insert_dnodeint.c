#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a
* new node at a given position
* @h: Pointer that point to the head
* at a dlistint_t list
* @idx: The index of the list where the new node
* should be added
* @n: value contained in the node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
}