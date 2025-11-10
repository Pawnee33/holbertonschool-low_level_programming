#include "main.h"
/**
* *_strdup - Function that returns a pointers to a newly
* allocated space memory, which contains a copy of the string
* @str: is the string to copy
* Return: The address of the copy of the string
*/
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;

	if (str == NULL)
	return (NULL);

	copy = malloc(strlen(str) + 1);

	if (copy == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';

	return (copy);
}
