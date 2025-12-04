#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node of a dlistint_t
 * list at a given index
 * @head: double pointer to the head of the doubly linked list
 * @index: position of the node to delete (0-based)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;
	dlistint_t *deleted = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(deleted);
		return (1);
	}

	for (i = 1; tmp != NULL && i < index; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (-1);
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	free(tmp);
	return (1);
}
