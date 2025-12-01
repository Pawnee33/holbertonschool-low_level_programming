#include "lists.h"
/**
* list_len - returns the number of elements of list_t
* @h: My pointer that point to ma list_t
*
* Return: the numbers of elements in a linked
* list_t
*/
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t add = 0;

	while (tmp != NULL)
	{
		add++;
		tmp = tmp->next;
	}
	return (add);
}
