#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a
* new node at a given position
* @h: Pointer that point to the head
* at a dlistint_t list
* @idx: The index of the list where the new node
* should be added
* @n: value contained in the node
* Return: the address of the new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *insert_node;
	unsigned int i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	insert_node = malloc(sizeof(dlistint_t));
	if (insert_node == NULL)
	{
		return (NULL);
	}
	insert_node->n = (n);
	insert_node->next = tmp->next;
	insert_node->prev = tmp;
	if (tmp->next != NULL)
	{
		tmp->next->prev = insert_node;
	}
	tmp->next = insert_node;
	return (insert_node);
}
