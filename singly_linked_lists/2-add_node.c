#include "lists.h"
#include <string.h>
/**
* add_node - adds a new node of a list_t
* @head: Pointer to the pointer to the head of the list
* @str: String to duplicate and store in the new node
*
* Return: The adress of my new node or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	new_node->len = (i);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
