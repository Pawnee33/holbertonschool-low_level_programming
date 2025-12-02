#include "lists.h"
#include <string.h>
/**
* add_dnodeint_end - adds a end node at the beginning of a dlistint_t
* @head: Pointer to the pointer to the head of the list
* @n: value to store in the end node
*
* Return: The address of the end node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = (n);
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
		end_node->prev = temp;
		return (end_node);
	}
}
