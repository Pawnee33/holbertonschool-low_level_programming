#include "lists.h"
/**
* print_list - Prints all elements of list_t
* @h: My pointer that point to ma list_t
*
* Return: the numbers of elements in a linked
* list_t
*/
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t add = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
		}
		else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
		}
			add++;
			tmp = tmp->next;
	}
	return (add);
}
