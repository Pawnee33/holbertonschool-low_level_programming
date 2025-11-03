#include "main.h"
/**
 * *_strchr - Function that locates a character in a string
 * @s: pointer to the string to search in
 * @c: Charcter to locate
 * , return pointer to the matching character
 * Return: NULL
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		if (s[i] == '\0' || s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
