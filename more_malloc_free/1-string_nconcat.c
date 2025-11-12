#include "main.h"
/**
* *string_nconcat - Function that concatenates two strings
* @s1: is the first string
* @s2: is the second string to concatenates
* @n: number of char from s2
* Return: The address of the copy of the concatenates two
* string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcate;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;

	if (n >= j)
	n = j;

	nconcate = malloc(sizeof(char) * (i + n + 1));

	if (nconcate == NULL)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		nconcate[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		nconcate[i + j] = s2[j];
	}
	nconcate[i + j] = '\0';

	return (nconcate);
}
