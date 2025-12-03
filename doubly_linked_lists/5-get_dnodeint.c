#include "lists.h"
/**
* get_dnodeint_at_index - Returns the numbers of index node
* of a dlistint_t list
* @head: Pointer to the head of the list
* @index: Index to return
* Return: Index or NULL if the node
* doesn't extist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *keep_address = head;
	unsigned int i;

	for (i = 0; keep_address != NULL && i < index; i++)
	{
		keep_address = keep_address->next;
	}

	return (keep_address);
}
