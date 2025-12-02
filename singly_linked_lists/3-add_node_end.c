#include "lists.h"
#include <string.h>
/**
* add_node_end - adds a end node at the end of a list_t
* @head: Pointer to the pointer to the head of the list
* @str: String to duplicate and store in the end node
*
* Return: The adress of my end node or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	unsigned int i = 0;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	end_node->len = (i);
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
		return (end_node);
	}
}
