#include "lists.h"
#include <string.h>
/**
* free_dlistint - frees a dlistint_t list
* @head: Pointer to the pointer to the head of the list
* dlistint_t keep_address - Keep address of next node before to free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *keep_address = head;

	while (keep_address)
	{
		dlistint_t *next = keep_address->next;

		free(keep_address->next);
		keep_address = next;
	}
}
