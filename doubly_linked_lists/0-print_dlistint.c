#include "lists.h"
/**
* print_dlistint - Prints all elements of dlistint_t list
* @h: My pointer that point to a dlistint_t
*
* Return: the numbers of elements in a linked
* dlistint_t list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t add = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
			add++;
	}
	return (add);
}
