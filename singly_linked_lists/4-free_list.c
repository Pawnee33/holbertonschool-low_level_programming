#include "lists.h"
#include <string.h>
/**
* free_list - frees a list_t
* @head: Pointer to the pointer to the head of the list
* list_t keep_address - Keep address of next node before to free
*/
void free_list(list_t *head)
{
	list_t *keep_address;

	while (head != NULL)
	{
		keep_address = head->next;
		free(head->str);
		free(head);
		head = keep_address;
	}
}
