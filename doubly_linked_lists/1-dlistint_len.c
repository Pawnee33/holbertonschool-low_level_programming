#include "lists.h"
/**
* dlistint_len - returns the number of elements of dlistint_t
* @h: My pointer that point to a dlistint_t
*
* Return: the numbers of elements in a linked
* dlistint_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t add = 0;

	while (tmp != NULL)
	{
		add++;
		tmp = tmp->next;
	}
	return (add);
}
