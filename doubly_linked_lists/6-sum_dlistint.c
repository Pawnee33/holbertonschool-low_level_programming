#include "lists.h"
/**
* sum_dlistint - Returns the sum of all the data 'n'
* of a dlistint_t list
* @head: Pointer to the head of the list
* Return: The sum of all data or '0' if the list
* is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *keep_address = head;
	int sum = 0;

	while (keep_address != NULL)
	{
		sum += keep_address->n;
		keep_address = keep_address->next;
	}
	return (sum);
}
