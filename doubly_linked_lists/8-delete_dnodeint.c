#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node of a dlistint_t
 * list at a given index
 * @head: pointer to the head of the doubly linked list
 * @index: position of the node to delete
 *
 * Return: 1 on success, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	tmp = *head;
	for (i = 1; tmp != NULL && i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (-1);
		}
	}
	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
