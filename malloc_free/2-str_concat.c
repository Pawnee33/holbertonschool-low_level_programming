#include "main.h"
/**
* *str_concat - Function that concatenates two strings
* @s1: is the first string
* @s2: is the second string to concatenates
* Return: The address of the copy of the concatenates two
* string
*/
char *str_concat(char *s1, char *s2)
{
	char *concate;
	unsigned int i, j;

	if (s1 == NULL)
	{
		return (NULL);
	}

	if (s2 == NULL)
	{
		return (NULL);
	}

	concate = malloc(strlen(s1) + strlen(s2) + 1);

	if (concate == NULL)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concate[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concate[i + j] = s2[j];
	}
	concate[i + j] = '\0';

	return (concate);
}
