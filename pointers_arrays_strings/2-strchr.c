#include "main.h"
/**
 * *_strchr - Function that locates a character in a string
 * @s: pointer to the string to search in
 * @c: Charcter to locate
 * Return: NULL
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == '\0')
		{
			return (s + 1);
		}
	}
	return (NULL);
}
